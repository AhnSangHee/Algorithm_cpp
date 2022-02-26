//  A/B
//  1008.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

double A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    cout.precision(15);
    cout << A / B << "\n";
    
    return 0;
}
