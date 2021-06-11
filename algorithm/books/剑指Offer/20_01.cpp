// 2021-06-11
// 包含min函数的栈 （使用两个栈） 

class Solution {
public:
	void push(int value) {
		if (st.size() == 0 && minSt.size() == 0) {
			st.push(value);
			minSt.push(value);
		} else {
			st.push(value);
			if (value <= minSt.top()) {
				minSt.push(value);
			} else {
				minSt.push(minSt.top());
			}
		}
	}
	void pop() {
		st.pop();
		minSt.pop();
	}
	int top() {
		return st.top();
	}
	int min() {
		return minSt.top();
	}
	stack<int> minSt;
	stack<int> st;
}; 
