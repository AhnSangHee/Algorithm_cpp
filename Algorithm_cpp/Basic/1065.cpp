//  한수
//  1065.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int X, A, B, C;
int cnt = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> X;
    
    if (X <= 99) {
        // 1 ~ 99 까지는 모두 다 한수
        cout << X << "\n";
    }
    else {
        for (int i = 100; i <= X; i++) {
            A = i / 100; // 백의 자리
            B = (i / 10) % 10; // 십의 자리
            C = i % 10; // 일의 자리
            
            if (A - B == B - C) {
                cnt++; // 등차수열이면 카운트해준다
            }
        }
        cout << 99 + cnt << "\n";
    }
    return 0;
}
