// 2021-06-13
// �����г��ִ�������һ������� ����ϣ��

int MoreThanHalfNum_Solution(vector<int> numbers) {
	unordered_map<int, int> unmp;
	int len = numbers.size();
	for (int i = 0; i < len; ++i) {
		unmp[numbers[i]]++;
		if (unmp[numbers[i]] > len / 2) return numbers[i];
	}
	return 0;
} 
