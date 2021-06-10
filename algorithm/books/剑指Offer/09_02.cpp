// 2021-06-10
// 变态跳台阶

int jumpFloor(int number) {
	if (number == 1) return 1;
	int count = 0, a = 1;
	for (int i = 2; i <= number; ++i) {
		count = a * 2;
		a = count;
	}
	return count;
} 
