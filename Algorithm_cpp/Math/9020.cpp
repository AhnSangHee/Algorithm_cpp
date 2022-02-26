//  골드바흐의 추측
//  9020.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, N, a, b;
int check[10001];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    check[1] = 1;
        
    // 소수 판별. 원소 값이 1이면 소수가 아니고, 0이면 소수.
    for (int i = 2; i < 10001; i++) {
        for (int j = i * 2; j < 10001; j += i) {
            if (check[j] == 1) continue;
            else check[j] = 1;
        }
    }
    
    cin >> T;
    while (T--) {
        cin >> N;
        // 서로 다른 두 소수들 중 가장 작은 차이가 나는 경우는 두 소수가 각각 n/2일 경우
        // 10을 입력했을 때 5, 5인 경우 처럼.
        // 따라서 차이가 가장 작은 n/2를 중앙으로 i, n-i를 차례대로 보면서 정답을 갱신해나가면 차이가 최소인 두 소수가 나온다
        for (int i = N/2; i > 0; i--) {
            if (check[i] == 0 && check[N-i] == 0) {
                // 가장 차이가 적은 소수 2개
                // 소수 n = i + (n - i)
                cout << i << " " << N-i << "\n";
                break;
            }
        }
    }
    return 0;
}
