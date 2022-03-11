//  균형잡힌 세상
//  4949.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/11.
//

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (true) {
        stack<char> st;
        
        string s;
        getline(cin, s);
        
        if (s[0] == '.') return 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[') st.push(s[i]);
            else if (st.empty() && (s[i] == ')' || s[i] == ']')) st.push(s[i]); // 스택이 비어있는데 ) 또는 ]가 오면 그냥 바로 넣기
            else if (!st.empty()) {
                if (st.top() == '(') {
                    if (s[i] == ')') st.pop();
                    else if (s[i] == ']') st.push(s[i]);
                } else if (st.top() == '[') {
                    if (s[i] == ']') st.pop();
                    else if (s[i] == ')') st.push(s[i]);
                }
            }
        }
        
        if (st.empty()) cout << "yes\n";
        else cout << "no\n";
    }
    
    return 0;
}
