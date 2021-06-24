// 2021-06-24
// МєЩўзг

int cutRope(int number) {
	if (number < 2) return 0;
	if (number <= 3) return number - 1;
	int maxNum = 1;
	while (number > 4) {
		maxNum *= 3;
		number -= 3;
	}
	maxNum *= number;
	return maxNum; 
} 
