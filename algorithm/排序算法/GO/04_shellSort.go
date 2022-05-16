// 2022-05-16
// 希尔排序

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