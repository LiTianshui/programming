// 2021-06-10
// ±äÌ¬ÌøÌ¨½×

int jumpFloorII(int number) {
	if (number == 1) return 1;
	return 2 * jumpFloorII(number - 1);
} 
