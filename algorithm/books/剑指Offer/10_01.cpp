// 2021-06-10
// ���󸲸�

int rectCover(int number) {
	if (number <= 2) return number;
	return rectCover(number - 1) + rectCover(number - 2);
} 
