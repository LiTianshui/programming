// 2021-06-16
// �����е������� ��ֻͨ��%50�ı�������

int InversePairs(vector<int> data) {
	if (data.size() <= 1) return 0;
	int len = data.size();
	vector<int> dp(len, 0);
	for (int i = len - 2; i >= 0; --i) {
		for (int j = i + 1; j < len; ++j) {
			if (data[i] > data[j]) {
				dp[i]++;
			}
		}
	}
	return accumulate(dp.begin(), dp.end(), 0) % 1000000007;
} 
