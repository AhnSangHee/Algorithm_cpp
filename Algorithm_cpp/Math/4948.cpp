//  베르트랑 공준
//  4948.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int n, cnt;
int check[300000];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 2; i < 300000; i++) {
        check[i] = i; // 초기화
    }
    for (int i = 2; i < 300000; i++) {
        if (check[i] == 0) continue;
        for (int j = i * 2; j < 300000; j += i) {
            check[j] = 0;
        }
    }
    
    while (1) {
        cin >> n;
        cnt = 0;
        if (n == 0) break;
        for (int i = n + 1; i <= n * 2; i++) { // n보다 크고 2n보다 작거나 같은 소수의 개수 구하기
            if (check[i] != 0) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
