//  알람 시계
//  2884.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int H, M;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> H >> M;
    
    if (H == 0) {
        if (M < 45) {
            H = 23;
            M = M + 60 - 45;
        }
        else M -= 45;
    }
    else {
        if (M < 45) {
            H -= 1;
            M = M + 60 - 45;
        }
        else {
            M -= 45;
        }
    }
    
    cout << H << " " << M << "\n";
    
    return 0;
}
