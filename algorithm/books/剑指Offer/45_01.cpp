// 2021-06-21
// ÆË¿ËÅÆË³×Ó

bool IsContinuous(vector<int> numbers) {
	int len = numbers.size();
	if (len < 5) return false;
	sort(numbers.begin(), numbers.end());
	int numOfZero = 0, numOfInner = 0;
	for (int i = 0; i < len - 1; ++i) {
		if (numbers[i] == 0) ++numOfZero;
		else if (numbers[i] == numbers[i+1]) {
			return false;
		} else {
			numOfInner += numbers[i+1] - numbers[i] - 1;
		}
	}
	if (numOfZero >= numOfInner) return true;
	return false;
} 
