// 2021-07-11
// 241. 为运算表达式设计优先级

vector<int> diffWaysToCompute(string expression) {
	vector<int> ways;
	for (int i = 0; i < expression.length(); ++i) {
		char c = expression[i];
		if (c == '+' || c == '-' || c == '*') {
			vector<int> left = diffWaysToCompute(expression.substr(0, i));
			vector<int> right = diffWaysToCompute(expression.substr(i + 1));
			for (const int &l : left) {
				for (const int &r : right) {
					switch(c) {
						case '+': ways.push_back(l + r); break;
						case '-': ways.push_back(l - r); break;
						case '*': ways.push_back(l * r); break;
					}
				}
			}
		}
	}
	if (ways.empty()) ways.push_back(stoi(expression));
	return ways;
} 
