// 2022-05-26

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if (pushV.size() == 0 || popV.size() == 0) return false;
        stack<int> st;
        for (int i = 0, j = 0; i < pushV.size(); i++) {
            st.push(pushV[i]);
            while (!st.empty() && j < popV.size() && st.top() == popV[j]) {
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};