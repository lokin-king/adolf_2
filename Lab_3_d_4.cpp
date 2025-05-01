#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{')
            st.push(c);
        else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string S;
    getline(cin, S);

    if (isBalanced(S))
        cout << "Дужки збалансовані" << endl;
    else
        cout << "Дужки не збалансовані" << endl;
    return 0;
}
