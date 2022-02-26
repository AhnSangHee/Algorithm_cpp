//  구구단
//  2739.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 1; i <= 9; i++) {
        cout << N << " * " << i << " = " << N * i << "\n";
    }
    
    return 0;
}
