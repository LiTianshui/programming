// 2021-06-22
// 字符串转化为整数

int StrToInt(string str) {
	int len = str.size();
	if (len == 0) return 0;
	int i = 0, flag = 1, isSignal = 0;
	long res = 0;
	while (i < len && str[i] == ' ') i++;
	if (i >= len) return 0;
	while (i < len && (str[i] == ' ' || str[i] == '+')) {
		if (str[i] == '-') flag = -1;
		i++;
		isSignal++;
		if (isSignal > 1) return 0;
	}
	for (; i < len; ++i) {
		if (str[i] > '9' || str[i] < '0') return 0;
		res = res * 10 + str[i] - '0';
		if (res > INT_MAX && flag == 1) return 0;
		if (res - 1 > INT_MAX && flag == -1) return 0;
	}
	return flag * res;
} 
