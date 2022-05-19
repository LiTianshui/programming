package main

import (
	"fmt"
	"math/rand"
	"sort"
	"time"
)

const DEFAULT_BUCKET_SIZE = 5

func initData(num int) []int {
	rand.Seed(time.Now().UnixNano())
	testData := make([]int, num)
	for i := 0; i < num; i++ {
		testData[i] = rand.Intn(100)
	}
	return testData
}

func compare(arr1 []int, arr2 []int) bool {
	if len(arr1) != len(arr2) {
		return false
	}

	for i, _ := range arr1 {
		if arr1[i] != arr2[i] {
			return false
		}
	}

	return true
}

func test_func(testData []int, referenceData []int, sortFunc func(arr []int) []int) {
	result := sortFunc(testData)
	fmt.Println(result)
	if compare(referenceData, result) {
		fmt.Println("Test passed")
	} else {
		fmt.Println("Test failed")
	}
	fmt.Println("========================")
}

func main() {
	testData := initData(20)
	referenceData := make([]int, 20)
	copy(referenceData, testData)
	sort.Ints(referenceData)
	fmt.Println("Test data: ")
	fmt.Println(testData)
	fmt.Println("========================")

	fmt.Println("Bubble Sort: ")
	test_func(testData, referenceData, bubbleSort)

	fmt.Println("Selection Sort: ")
	test_func(testData, referenceData, selectionSort)

	fmt.Println("Insertion Sort: ")
	test_func(testData, referenceData, insertionSort)

	fmt.Println("Shell Sort: ")
	test_func(testData, referenceData, shellSort)

	fmt.Println("Merge Sort: ")
	test_func(testData, referenceData, mergeSort)

	fmt.Println("Quick Sort: ")
	test_func(testData, referenceData, quickSort)

	fmt.Println("Heap Sort: ")
	test_func(testData, referenceData, heapSort)

	fmt.Println("Counting Sort: ")
	test_func(testData, referenceData, countingSort)

	fmt.Println("Bucket Sort: ")
	test_func(testData, referenceData, bucketSort)

	fmt.Println("Radix Sort: ")
	test_func(testData, referenceData, radixSort)

}

func bubbleSort(arr []int) []int {
	length := len(arr)
	for i := 0; i < length; i++ {
		flag := false
		for j := 0; j < length-1-i; j++ {
			if arr[j+1] < arr[j] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
				flag = true
			}
		}
		if flag == false {
			break
		}
	}
	return arr
}

func selectionSort(arr []int) []int {
	length := len(arr)
	for i := 0; i < length; i++ {
		min := i
		for j := i + 1; j < length; j++ {
			if arr[min] > arr[j] {
				min = j
			}
		}
		arr[min], arr[i] = arr[i], arr[min]
	}
	return arr
}

func insertionSort(arr []int) []int {
	length := len(arr)
	for i := 0; i < length; i++ {
		preIndex := i - 1
		current := arr[i]
		for preIndex >= 0 && arr[preIndex] > current {
			arr[preIndex+1] = arr[preIndex]
			preIndex -= 1
		}
		arr[preIndex+1] = current
	}
	return arr
}

func shellSort(arr []int) []int {
	length := len(arr)
	for gap := length / 2; gap > 0; gap /= 2 {
		for i := gap; i < length; i += gap {
			preIndex := i - gap
			current := arr[i]
			for preIndex >= 0 && arr[preIndex] > current {
				arr[preIndex+gap] = arr[preIndex]
				preIndex -= gap
			}
			arr[preIndex+gap] = current
		}
	}
	return arr
}

func mergeSort(arr []int) []int {
	length := len(arr)
	if length < 2 {
		return arr
	}
	middle := length / 2
	left := arr[0:middle]
	right := arr[middle:]
	return merge(mergeSort(left), mergeSort(right))
}

func merge(left, right []int) []int {
	var result []int
	for len(left) != 0 && len(right) != 0 {
		if left[0] < right[0] {
			result = append(result, left[0])
			left = left[1:]
		} else {
			result = append(result, right[0])
			right = right[1:]
		}
	}
	for len(left) != 0 {
		result = append(result, left[0])
		left = left[1:]
	}
	for len(right) != 0 {
		result = append(result, right[0])
		right = right[1:]
	}
	return result
}

func quickSort(arr []int) []int {
	return _quickSort(arr, 0, len(arr)-1)
}

func _quickSort(arr []int, left, right int) []int {
	if left >= right {
		return arr
	}
	first := left
	last := right
	pivot := arr[first]
	for first < last {
		for first < last && arr[last] >= pivot {
			last -= 1
		}
		for first < last && arr[first] <= pivot {
			first += 1
		}
		if first < last {
			arr[first], arr[last] = arr[last], arr[first]
		}
	}
	arr[first], arr[left] = arr[left], arr[first]
	_quickSort(arr, left, first-1)
	_quickSort(arr, first+1, right)
	return arr
}

func heapSort(arr []int) []int {
	length := len(arr)
	buildMaxHeap(arr, length)
	for i := length - 1; i >= 0; i-- {
		arr[0], arr[i] = arr[i], arr[0]
		length -= 1
		heapify(arr, 0, length)
	}
	return arr
}

func buildMaxHeap(arr []int, length int) {
	for i := length / 2; i >= 0; i-- {
		heapify(arr, i, length)
	}
}

func heapify(arr []int, i, length int) {
	left := 2*i + 1
	right := 2*i + 2
	largest := i
	if left < length && arr[left] > arr[largest] {
		largest = left
	}
	if right < length && arr[right] > arr[largest] {
		largest = right
	}
	if largest != i {
		arr[i], arr[largest] = arr[largest], arr[i]
		heapify(arr, largest, length)
	}
}

func countingSort(arr []int) []int {
	length := len(arr)
	maxValue := arr[0]
	for i := 1; i < length; i++ {
		if maxValue < arr[i] {
			maxValue = arr[i]
		}
	}
	bucketLen := maxValue + 1
	bucket := make([]int, bucketLen)
	sortedIndex := 0
	for i := 0; i < length; i++ {
		bucket[arr[i]]++
	}
	for j := 0; j < bucketLen; j++ {
		for bucket[j] > 0 {
			arr[sortedIndex] = j
			sortedIndex++
			bucket[j]--
		}
	}
	return arr
}

func bucketSort(arr []int) []int {
	length := len(arr)
	maxValue := arr[0]
	minValue := arr[0]
	var res []int
	for i := 1; i < length; i++ {
		if maxValue < arr[i] {
			maxValue = arr[i]
		}
		if minValue > arr[i] {
			minValue = arr[i]
		}
	}
	bucketSize := DEFAULT_BUCKET_SIZE

	bucketCount := (maxValue - minValue) / bucketSize
	bucketCount++
	bucket := make([][]int, bucketCount)
	for i := 0; i < length; i++ {
		sortedIndex := (arr[i] - minValue) / bucketSize
		bucket[sortedIndex] = append(bucket[sortedIndex], arr[i])
	}
	for i := 0; i < bucketCount; i++ {
		bucket[i] = insertionSort(bucket[i])
		for j := 0; j < len(bucket[i]); j++ {
			res = append(res, bucket[i][j])
		}
	}
	return res
}

func radixSort(arr []int) []int {
	length := len(arr)
	maxValue := arr[0]
	for i := 1; i < length; i++ {
		if maxValue < arr[i] {
			maxValue = arr[i]
		}
	}
	maxBit := 1
	for maxValue/10 > 0 {
		maxValue /= 10
		maxBit++
	}
	radix := 1
	for iBit := 1; iBit <= maxBit; iBit++ {
		bucket := make([][]int, 10)
		var res []int
		for i := 0; i < length; i++ {
			bucket[(arr[i]/radix)%10] = append(bucket[(arr[i]/radix)%10], arr[i])
		}
		for i := 0; i < 10; i++ {
			for j := 0; j < len(bucket[i]); j++ {
				res = append(res, bucket[i][j])
			}
		}
		arr = res
		radix *= 10
	}
	return arr
}
