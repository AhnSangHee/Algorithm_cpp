//  팩토리얼
//  10872.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, ans;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n-1);
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N;
    
    ans = factorial(N);
    
    cout << ans << "\n";
    
    return 0;
}
