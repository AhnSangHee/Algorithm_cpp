//  A+B-3
//  10950.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
    return 0;
}
