// 2021-07-16
// 155. ×îÐ¡Õ»

class MinStack {
	stack<int> s, min_s;
public:
	MinStack();
	void push(int val) {
		s.push(val);
		if (min_s.empty() || min_s.top() >= val) {
			min_s.push(val);
		}
	}
	void pop() {
		if (!min_s.empty() && min_s.top() == s.top()) {
			min_s.pop();
		}
		s.pop();
	}
	int top() {
		return s.top();
	}
	int getMin() {
		return min_s.top();
	}
}; 
