//  A+B - 5
//  10952.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (1) {
        cin >> A >> B;
        if (A == 0 && B == 0) break;
        cout << A + B << "\n";
    }

    return 0;
}
