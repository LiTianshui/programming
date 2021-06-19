// 2021-06-19
// 数组中只出现一次的数字 （异或法）

void FindNumsAppearOnce(vector<int> data, int* num1, int* num2) {
	if (data.size() < 2) return;
	int totalNum = 0;
	for (int i = 0; i < data.size(); i++) {
		totalNum ^= data[i];
	}
	int sign = 0;
	for (; sign < data.size(); sign++) {
		if ((totalNum & (1 << sign)) != 0) {
			break;
		}
	}
	num1[0] = 0;
	num2[0] = 0;
	for (int i = 0; i < data.size(); i++) {
		if ((data[i] & (1 << sign)) == 0) {
			num1[0] ^= data[i];
		} else {
			num2[0] ^= data[i];
		}
	}
}
