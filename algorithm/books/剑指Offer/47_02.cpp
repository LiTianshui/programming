// 2021-06-22
// Çó1+2+3+...+N

int Sum_Solution(int n) {
	int sumNum = n;
	bool ans = (n > 0) && ((sumNum += Sum_Solution(n - 1)) > 0);
	return sumNum;
} 
