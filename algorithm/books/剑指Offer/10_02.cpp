// 2021-06-10
// ¾ØÕó¸²¸Ç

int rectCover(int number) {
	if (number <= 2) {
		return number;
	}
	int first = 1, second = 2, third = 3;
	for (int i = 3; i <= number; ++i) {
		third = first + second;
		first = second;
		second = third;
	}
	return third;
} 
