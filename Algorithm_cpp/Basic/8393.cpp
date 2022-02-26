//  합
//  8393.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int n, sum;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n;
    
    sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << sum << "\n";
    
    return 0;
}
