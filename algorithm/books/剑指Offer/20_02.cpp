// 2021-06-11
// 包含min函数的栈 （使用一个栈）

class Solution {
	int minNum = INT_MAX;
	stack<int> st;
public:
	void push(int value) {
		minNum = std::min(value, minNum);
		st.push(minNum);
		st.push(value);
	}
	void pop() {
		st.pop();
		st.pop();
		int temp = st.top();
		st.pop();
		if (minNum = st.top()) {
			st.push(temp);
		} else {
			minNum = st.top();
			st.pop();
			st.push(minNum);
			st.push(temp);
		}
	}
	int top() {
		return st.top();
	}
	int min() {
		return minNum;
	}
};
