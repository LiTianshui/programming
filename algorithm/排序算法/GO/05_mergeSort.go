// 2022-05-16
// 归并排序

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
	for len(left) && len(right) {
		if left[0] < right[0] {
			result = append(result, left[0])
			left = left[1:]
		} else {
			result = append(result, right[0])
			right = right[1:]
		}
	}
	for len(left) {
		result = append(result, left[0])
		left = left[1:]
	}
	for len(right) {
		result = append(result, right[0])
		right = right[1:]
	}
	return result
}