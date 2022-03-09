//  큐
//  10845.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/09.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;

queue<int> q;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    while (N--) {
        string s;
        cin >> s;
        
        if (s == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (s == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << "-1\n";
            }
        } else if (s == "size") {
            cout << q.size() << "\n";
        } else if (s == "empty") {
            if (q.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (s == "front") {
            if (!q.empty()) {
                cout << q.front() << "\n";
            } else {
                cout << "-1\n";
            }
        } else if (s == "back") {
            if (!q.empty()) {
                cout << q.back() << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
    
    return 0;
}
