// 2021-06-13
// 数组中出现次数超过一半的数字 （摩尔投票法）

int MoreThanHalfNum_Solution(vector<int> numbers) {
	int cnt = 0, num = 0;
	for (int i = 0; i < numbers.size(); ++i) {
		if (cnt == 0) {
			num = numbers[i];
			cnt = 1;
		} else {
			num == numbers[i] ? cnt++ : cnt--;
		}
	}
	cnt = count(numbers.begin(), numbers.end(), num);
	return cnt > numbers.size() / 2 ? num : 0;
}
