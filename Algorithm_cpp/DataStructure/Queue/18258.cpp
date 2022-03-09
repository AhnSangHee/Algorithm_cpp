//  큐2
//  18258.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/09.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int N, num;
queue<int> q;
string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    while (N--) {
        cin >> s;
        
        if (s == "push") { // 정수 X를 큐에 넣는 연산
            cin >> num;
            q.push(num);
        }
        else if (s == "pop") {
            // 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << "-1" << "\n";
        }
        else if (s == "size") { // 큐에 들어있는 정수의 개수를 출력
            cout << q.size() << "\n";
        }
        else if (s == "empty") { // 큐가 비어있으면 1, 아니면 0을 출력
            if (q.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else if (s == "front") { // 큐의 가장 앞에 있는 정수를 출력. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
            if (!q.empty()) cout << q.front() << "\n";
            else cout << "-1" << "\n";
        }
        else if (s == "back") { // 큐의 가장 뒤에 있는 정수를 출력. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력
            if (!q.empty()) cout << q.back() << "\n";
            else cout << "-1" << "\n";
        }
    }

    return 0;
}
