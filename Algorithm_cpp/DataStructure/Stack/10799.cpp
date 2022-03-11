//  쇠막대기
//  10799.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/11.
//

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

string s;
stack<char> st;
int cnt = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') st.push(s[i]); // '('는 무조건 push
        else if (!st.empty() && s[i-1] == ')' && s[i] == ')') {
            cnt++;
            st.pop();
        }
        else if (!st.empty() && s[i] == ')' && st.top() == '(') {
            // 스택이 비어있지 않고, 스택의 top이 '(' 이면서 s[i] = ')' 인 경우
            st.pop();
            cnt += st.size();
        }
    }
    
    cout << cnt << "\n";
    return 0;
}
