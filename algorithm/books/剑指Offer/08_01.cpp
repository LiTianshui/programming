// 2021-06-10
// 跳台阶 (递归)

int jumpFloor(int number) {
	if (number == 1) return 1;
	if (number == 2) return 2;
	return  jumpFloor(number - 1) + jumpFloor(number - 2);
}
