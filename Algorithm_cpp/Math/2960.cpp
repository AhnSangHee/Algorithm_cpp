//  에라토스테네스의 체
//  2960.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int cnt = 0; // 몇 번째에 지워졌는지 체크
int arr[1001];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> K;
    
    for (int i = 2; i <= N; i++) {
        arr[i] = i;
    }
    
    for (int i = 2; i <= N; i++) {
        if (arr[i] == 0) continue;
        for (int j = i; j <= N; j += i) {
            if (arr[j] == 0) continue;
            arr[j] = 0;
            cnt++;
            
            if (cnt == K) { // K번째 지워진 수 출력
                cout << j;
                return 0;
            }
        }
    }
    
    return 0;
}
