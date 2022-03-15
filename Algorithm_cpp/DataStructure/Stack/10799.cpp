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
        else if (!st.empty() && s[i-1] == ')' && s[i] == ')') { // ')'가 연속으로 오면 +1
            cnt++;
            st.pop();
        }
        else if (!st.empty() && s[i] == ')' && st.top() == '(') {
            // 스택이 비어있지 않고, 스택의 top이 '(' 이면서 s[i] = ')' 인 경우
            // 스택의 top은 스택이 비어있지 않다면 무조건 '('이기 때문에, st.top() == '('를 체크 안해줘도 된다
            st.pop();
            cnt += st.size();
        }
    }
    
    cout << cnt << "\n";
    return 0;
}
