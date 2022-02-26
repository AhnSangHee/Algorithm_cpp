//  A+B - 8
//  11022.cpp
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
    
    int cnt = 1;
    
    while (T--) {
        cin >> A >> B;
        cout << "Case #" << cnt << ": " << A << " + " << B << " = " << A + B << "\n";
        cnt++;
    }
    return 0;
}
