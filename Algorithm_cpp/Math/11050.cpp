//  이항 계수 1
//  11050.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K;

int func(int n) {
    int a = 1;
    for (int i = 1; i <= n; i++) a *= i;
    return a;
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> K;
    
    cout << func(N) / (func(K) * func(N-K));
    
    return 0;
}
