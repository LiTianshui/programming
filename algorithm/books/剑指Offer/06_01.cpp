// 2021-06-09
// 旋转数组

int minNumberInRotateArray(vector<int> rotateArray) {
	if (rotateArray.size() == 0) return 0;
	int minNum = rotateArray[0], len = rotateArray.size();
	for (int i = 1; i < len; ++i) {
		if (rotateArray[i] < minNum) return rotateArray[i];
	}
	return minNum;
} 

int minNumberInRotateArray(vcector<int> rotateArray) {
	if (rotateArray.size() == 0) return 0;
	int len = rotateArray.size();
	for (int i = 0; i < len - 1; ++i) {
		if (rotateArray[i] > rotateArray[i+1]) return rotateArray[i+1];
	}
	return rotateArray[0];
} 
