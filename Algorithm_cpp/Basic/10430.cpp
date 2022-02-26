//  나머지
//  10430.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> C;
    
    cout << (A + B) % C << "\n";
    cout << ((A % C) + (B % C)) % C << "\n";
    cout << (A * B) % C << "\n";
    cout << ((A % C) * (B % C)) % C << "\n";
    
    return 0;
}
