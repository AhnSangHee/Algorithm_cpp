//  소수
//  2581.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int M, N, sum = 0;
int check[10001];
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> M >> N;
    
    for (int i = 2; i < 10001; i++) {
        check[i] = i; // 배열 초기화
    }
    
    for (int i = 2; i < 10001; i++) {
        // 소수 판별
        if (check[i] == 0) continue;
        for (int j = i * 2; j < 10001; j += i) {
            check[j] = 0;
        }
    }
    
    for (int i = M; i <= N; i++) {
        // 소수인 것만 v에 넣기
        if (check[i] != 0) {
            v.push_back(i);
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    
    if (v.empty()) cout << -1 << "\n"; // 소수 X
    else {
        sort(v.begin(), v.end());
        cout << sum << "\n" << v[0] << "\n";
    }
    return 0;
}
