// 2021-07-09
// 650. 只有两个键的键盘

int minSteps (int n) {
	vector<int> dp(n + 1);
	for (int i = 2; i <= n; ++i) {
		dp[i] = i;
		for (int j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				dp[i] = dp[j] + dp[i / j];
				break;
			}
		}
	}
	return dp[n];
} 
