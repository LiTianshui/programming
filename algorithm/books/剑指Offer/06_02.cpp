// 2021-06-09
// 旋转数组 -二分法 

int minNumberInRotateArray(vector<int> rotateArray) {
	if (rotateArray.size() == 0) return 0;
	int low = 0, high = rotateArray.size() - 1;
	while (low + 1 < high) {
		int mid = low + (high - low) / 2;
		if (rotateArray[mid] < rotateArray[high]) high = mid;
		else if (rotateArray[mid] == rotateArray[high]) high = high - 1;
		else {
			low = mid;
		}
	}
	return min(rotateArray[low], rotateArray[high]);
} 
