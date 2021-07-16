// 2021-07-16
// 20. 有效的符号

bool isValid(string s) {
	stack<char> parsed;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
			parsed.push(s[i]);
		} else {
			if (parsed.empty()) {
				return false;
			}
			char c = parsed.top();
			if (s[i] == '}' && c == '{' || (s[i] == ']' && c == '[') || (s[i] == ')' && c == '(')) {
				parsed.pop();
			} else {
				return false;
			}
		}
	}
	return parsed.empty();
} 
