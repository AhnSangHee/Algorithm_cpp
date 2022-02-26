//  소수 구하기
//  1929.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int M, N;
int check[1000001];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 2; i < 1000001; i++) {
        check[i] = i; // 초기화
    }
    for (int i = 2; i < 1000001; i++) {
        if (check[i] == 0) continue;
        for (int j = i * 2; j < 1000001; j += i) {
            check[j] = 0;
        }
    }
    
    cin >> M >> N;
    for (int i = M; i <= N; i++) {
        if (check[i] != 0) { // 소수 구하기
            cout << check[i] << "\n";
        }
    }
    return 0;
}
