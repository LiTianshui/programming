// 2021-06-10
// 变态跳台阶

int jumpFloorII(int number) {
	if (number == 1) return 1;
	return 2 * jumpFloorII(number - 1);
} 
