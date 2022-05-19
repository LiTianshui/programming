// 2022-05-18
// 计数排序

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