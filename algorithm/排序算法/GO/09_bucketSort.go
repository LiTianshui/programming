// 2022-05-18
// 桶排序

func bucketSort(arr []int, bucketSize int) []int {
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
	DEFAULT_BUCKET_SIZE := 5
	if bucketSize == 0 {
		bucketSize = DEFAULT_BUCKET_SIZE
	}
	bucketCount := (maxValue - minValue) / bucketSize
	bucketCount++
	fmt.Println("min = ", minValue, " max = ", maxValue)
	bucket := make([][]int, bucketCount)
	for i := 0; i < length; i++ {
		sortedIndex := (arr[i] - minValue) / bucketSize
		bucket[sortedIndex] = append(bucket[sortedIndex], arr[i])
	}
	fmt.Println(bucket)
	for i := 0; i < bucketCount; i++ {
		bucket[i] = insertionSort(bucket[i])
		for j := 0; j < len(bucket[i]); j++ {
			res = append(res, bucket[i][j])
		}
	}
	return res
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
