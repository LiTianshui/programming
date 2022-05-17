// 2022-05-17
// 堆排序

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