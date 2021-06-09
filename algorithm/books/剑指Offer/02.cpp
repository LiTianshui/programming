// 2021-06-09
// Ìæ»»¿Õ¸ñ

void replaceSpace(char *str, int length) {
	int spaceCount = 0;
	int totalLen = length;
	for (int i = 0; i < length; ++i) {
		if (str[i] == ' ') spaceCount++;
	}
	
	totalLen += spaceCount * 2;
	for (int i = length - 1; i >= 0 && totalLen != i; --i) {
		if (str[i] != ' ') str[--totalLen] = str[i];
		else {
			str[--totalLen] = '0';
			str[--totalLen] = '2';
			str[--totalLen] = '%';
		}
	}
}
