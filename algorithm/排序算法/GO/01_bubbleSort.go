// 2022-05-16
// 冒泡排序

func bubbleSort(arr []int) []int {
	length := len(arr)
	for i := 0; i < length; i++ {
		flag := false
		for j := i; j < length - 1; j++ {
			if arr[j+1] < arr[j]
				arr[j], arr[j+1] = arr[j+1], arr[j];
				flag = true
		}
		if flag == false
			break
	}
	return arr
}