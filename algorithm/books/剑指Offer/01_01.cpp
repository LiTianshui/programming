// 2021-06-09
// 二维数组中的查找 

bool Find(int target, vecianzhtor<vector<int> > array) {
	if (array.empty() || array[0].empty()) return false;
	int row = array[0].size(), col = array.size();
	
	int w = row - 1, h = 0;
	while (w >= 0 && h < col) {
		if (array[h][w] > target) w--;
		else if (array[h][w] < target) h++;
		else
			return true;
	}
	return false;
} 
