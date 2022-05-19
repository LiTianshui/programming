// 2022-05-19
// 基数排序

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
	for ibit := 1; ibit <= maxBit; ibit++ {
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
