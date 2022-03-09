//  키로거
//  5397.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/04.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int N;
string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    while (N--) {
        cin >> s;
        stack<char> st1, st2;
        
        for (auto ch: s) {
            if (ch == '<') {
                if (!st1.empty()) { // st1가 비어있지 않을 때만, st1의 top을 st2로 이동시킴
                    st2.push(st1.top());
                    st1.pop();
                }
            } else if (ch == '>') {
                if (!st2.empty()) { // st2가 비어있지 않을 때만, st2의 top을 st1로 이동시킴
                    st1.push(st2.top());
                    st2.pop();
                }
            } else if (ch == '-') {
                if (!st1.empty()) {
                    st1.pop();
                }
            } else {
                st1.push(ch);
            }
        }
        
        vector<char> v;
        
        while (!st1.empty()) {
            v.push_back(st1.top());
            st1.pop();
        }
        reverse(v.begin(), v.end());
        
        while (!st2.empty()) {
            v.push_back(st2.top());
            st2.pop();
        }
        
        for (auto ch: v) {
            cout << ch;
        }
        cout << "\n";
    }
    
    return 0;
}
