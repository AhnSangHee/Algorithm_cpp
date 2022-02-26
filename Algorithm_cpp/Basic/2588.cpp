//  곱셈
//  2588.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    cout << A * (B % 10) << "\n";
    cout << A * ((B / 10) % 10) << "\n";
    cout << A * (B / 100) << "\n";
    cout << A * B << "\n";
    
    return 0;
}
