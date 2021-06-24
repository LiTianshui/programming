// 2021-06-24
// 剪绳子 （动态规划）

int cutRope(int number) {
	if (number < 2) return -1;
	if (number <= 3) return number - 1;
	vector<int> dp(number + 1, 0);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	int maxNum = -1;
	for (int i = 4; i <=number; ++i) {
		for (int j = 1; j <= i / 2; ++j) {
			maxNum = max(maxNum, dp[j] * dp[i - j]);
		}
		dp[i] = maxNum;
	}
	return dp[number];
} 
