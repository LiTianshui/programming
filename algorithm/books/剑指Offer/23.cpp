// 2021-06-12
// 二叉搜索树的后序遍历序列

bool VerifySquenceOFBST(vector<int> sequence) {
	if (sequence.empty()) return false;
	if (sequence.size() == 1) return true;
	return VerifySquenceOfBSTCore(sequence, 0, sequence.size() - 1);
} 

bool VerifySquenceOfBSTCore(vector<int>& sequence, int start, int end) {
	if (start >= end) return true;
	int low = start;
	while (low < end && sequence[low] < sequence[end]) ++low;
	for (int i = low; i < end; ++i) {
		if (sequence[i] <= sequence[end]) return false;
	}
	return VerifySquenceOfBSTCore(sequence, start, low - 1) && VerifySquenceOfBSTCore(sequence, low, end - 1);
}
