//  스택
//  10828.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/02/28.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int N, number;
string command;
stack<int> st;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    while (N--) {
        cin >> command;
        
        if (command == "push") {
            cin >> number;
            st.push(number);
        } else if (command == "pop") {
            if (!st.empty()) {
                cout << st.top() << "\n";
                st.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "size") {
            cout << st.size() << "\n";
        } else if (command == "empty") {
            if (st.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else { // top
            if (st.empty()) {
                cout << -1 << "\n";
            } else {
                cout << st.top() << "\n";
            }
        }
    }

    return 0;
}
