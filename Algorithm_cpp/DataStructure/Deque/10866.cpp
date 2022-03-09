//  덱
//  10866.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/09.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>

using namespace std;

deque<int> dq;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (s == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (s == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << "\n";
                dq.pop_front();
            } else {
                cout << "-1\n";
            }
        } else if (s == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << "\n";
                dq.pop_back();
            } else {
                cout << "-1\n";
            }
        } else if (s == "size") {
            cout << dq.size() << "\n";
        } else if (s == "empty") {
            if (dq.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (s == "front") {
            if (!dq.empty()) {
                cout << dq.front() << "\n";
            } else {
                cout << "-1\n";
            }
        } else if (s == "back") {
            if (!dq.empty()) {
                cout << dq.back() << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
    
    return 0;
}
