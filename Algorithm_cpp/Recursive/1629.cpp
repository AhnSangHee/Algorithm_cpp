//  곱셈
//  1629.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

using ll = long long;
ll A, B, C;

ll POW(ll A, ll B, ll m){
    if (B == 1) return A % m; // base condition
    
    // recursion
    ll val = POW(A, B/2, m);
    val = val * val % m;
    if (B % 2 == 0) return val;
    return val * A % m;
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> C;

    cout << POW(A, B, C);
    
    return 0;
}
