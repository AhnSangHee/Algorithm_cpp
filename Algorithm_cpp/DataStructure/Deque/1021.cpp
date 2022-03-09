//
//  1021.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/09.
//

#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int N, M, num, cnt = 0;
deque<int> d;
deque<int>::iterator it;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        d.push_back(i);
    }

    for (int i = 0; i < M; i++) {
        cin >> num;
        
        // 뽑으려는 수의 인덱스 구하기
        int idx = 1;
        for (it = d.begin(); it < d.end(); it++) {
            if (*it == num) break; // 뽑으려는 수의 인덱스와 덱에 들어있는 숫자가 같다면 break.
            idx++;
        }
        
        int left = idx - 1; // 연산 2
        int right = d.size() - idx + 1; // 연산 3
        
        if (left < right) { // 연산 2가 더 적을 경우
            for (int j = 0; j < left; j++) {
                int tmp = d.front();
                d.push_back(tmp);
                d.pop_front();
                cnt++;
            }
            d.pop_front();
        } else { // 연산 3이 더 적거나 같을 경우
            for (int j = 0; j < right; j++) {
                int tmp = d.back();
                d.push_front(tmp);
                d.pop_back();
                cnt++;
            }
            d.pop_front();
        }
        
    }
    cout << cnt << "\n";
    return 0;
}
