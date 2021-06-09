// 2021-06-09
// 用两个栈来实现一个队列
 
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        while (stack1.size() != 1) {
        	stack2.push(stack1.top());
        	stack1.pop();
		}
		int value = stack1.top();
		stack1.pop();
		while (!stack2.empty()) {
			stack1.push(stack2.top());
			stack2.pop();
		}
		return value;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
