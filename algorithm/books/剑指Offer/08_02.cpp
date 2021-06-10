// 2021-06-10
// 跳台阶 （直接循环）

int jumpFloor(int number) {
	if (number == 1) {
		return 1;
	}
	int first = 1;
	int second = 2;
	for (int i = 3; i <= number; ++i) {
		int third = first + second;
		first = second;
		second = third;
	}
	return second;
} 
