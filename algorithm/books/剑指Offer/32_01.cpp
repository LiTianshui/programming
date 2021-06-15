// 2021-06-15
// 把数组排成最小的数

string minNumber(vector<int>& nums) {
	vector<string> temp;
	for (auto num : numbers) {
		temp.push_back(to_string(num));
	}
	sort(temp.begin(), temp.end(), [](const string& a, const string& b) { return a + b < b + a; }); 
	string result;
	for (auto& t : temp) {
		result += t;
	}
	return result;
} 
