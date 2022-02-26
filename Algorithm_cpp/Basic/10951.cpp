//  A+B - 4
//  10951.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (cin >> A >> B) {
        cout << A + B << "\n";
    }

    return 0;
}
