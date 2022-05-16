// 2022-05-16
// 快速排序

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
