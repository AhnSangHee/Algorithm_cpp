//  부녀회장이 될테야
//  2775.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, K, N;
int total; // [i-1][0] ~ [i-1][j-1]에 사는 사람들을 전부 다 구한 수
int apartment[15][15];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 1; i < 15; i++) {
        // 아파트 0층의 i호에는 i명이 산다 (초기화)
        apartment[0][i] = i;
    }
    
    for (int i = 1; i < 15; i++) {
        total = 0;
        for (int j = 1; j < 15; j++) {
            apartment[i][j] = apartment[i-1][j] + total;
            total += apartment[i-1][j];
        }
    }
    
    cin >> T;
    while (T--) {
        cin >> K >> N;
        cout << apartment[K][N] << "\n";
    }
    
    return 0;
}
