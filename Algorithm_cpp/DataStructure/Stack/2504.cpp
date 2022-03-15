//
//  2504.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/12.
//

#include <iostream>
#include <string>
#include <stack>
 
using namespace std;
 
string str;
stack<char> s;
 
int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> str;
 
    int answer = 0, temp = 1;
    for(int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            temp *= 2;
            s.push('(');
        } else if (str[i] == '[') {
            temp *= 3;
            s.push('[');
        } else if (str[i] == ')') {
            if (s.empty() || s.top() != '(') { // 올바르지 못한 괄호열
                cout << 0;
                return 0;
            }
            
            if (str[i-1] == '(') {
                answer += temp;
            }
            
            temp /= 2;
            s.pop();
        } else if (str[i] == ']') {
            if (s.empty() || s.top() != '[') { // 올바르지 못한 괄호열
                cout << 0;
                return 0;
            }
            
            if (str[i-1] == '[') {
                answer += temp;
            }
            
            temp /= 3;
            s.pop();
        }
    }
 
    if (!s.empty()) answer = 0; // 올바르지 못한 괄호열
    cout << answer << "\n";
    return 0;
}
