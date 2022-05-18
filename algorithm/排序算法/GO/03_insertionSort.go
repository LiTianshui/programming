// 2022-05-16
// 插入排序

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