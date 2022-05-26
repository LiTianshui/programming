// 2022-05-26

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> L;
    while (n--) {
        string s;
        int t;
        cin >> s;
        if (s == "push") {
            cin >> t;
            L.push(t);
        } else if (s == "pop") {
            if (L.empty()) {
                cout << "error" << endl;
            } else {
                cout << L.top() << endl;
                L.pop();
            }
        } else if (s == "top") {
            if (L.empty()) {
                cout << "error" << endl;
            } else {
                cout << L.top() << endl;
            }
        }
    }
    return 0;
}