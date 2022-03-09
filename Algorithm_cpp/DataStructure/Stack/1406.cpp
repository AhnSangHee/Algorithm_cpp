//  에디터
//  1406.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/02/27.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

using namespace std;

string s;
char command, c;
int M;
stack<char> st1, st2;
vector<char> v1, v2;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s >> M;
    for (int i = 0; i < s.length(); i++) {
        st1.push(s[i]);
    }
    
    while (M--) {
        cin >> command;
        
        if (command == 'L') {
            if (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        } else if (command == 'D') {
            if (!st2.empty()) {
                st1.push(st2.top());
                st2.pop();
            }
        } else if (command == 'B') {
            if (!st1.empty()) {
                st1.pop();
            }
        } else { // P
            cin >> c;
            st1.push(c);
        }
    }
    
    while (!st1.empty()) {
        v1.push_back(st1.top());
        st1.pop();
    }
    reverse(v1.begin(), v1.end());
    
    while (!st2.empty()) {
        v2.push_back(st2.top());
        st2.pop();
    }
    
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i];
    }
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i];
    }
    return 0;
}
