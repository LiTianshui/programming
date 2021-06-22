// 2021-06-22
// 正则表达式匹配

bool match(string str, string pattern) {
	char a[100], b[100];
	strcpy(a,str.c_str());
	strcpy(b,pattern.c_str());
	return match(a, b);
}
bool match(char* str, char* pattern) {
	if (str[0] == '\0' && pattern[0] == '\0')
		return true;
	if (str[0] != '\0' && pattern[0] == '\0')
		return false;
	if (pattern[1] != '*') {	// if the next character in pattern is not '*'
		if (str[0] == pattern[0] || (str[0] != '\0' && pattern[0] == '.'))
			return match(str + 1, pattern + 1);
		else
			return false;
	} else {		// if the next character in patten is '*'
		if (str[0] == pattern[0] || (str[0] != '\0' && pattern[0] == '.'))
			return match(str, pattern + 2) || match(str + 1, pattern);
		else
			return match(str, pattern + 2);
	}
} 
