//  Fly me to the Alpha Centauri
//  1011.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int T, x, y; // 테스트 케이스의 수, x, y 지점
int d, remain; // 총 이동해야하는 거리, 남은 거리

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    while(T--) {
        cin >> x >> y;
        
        d = y - x;
        
        int n = sqrt(d);
        remain = d - n * n;
        int result = n * 2 - 1;
        
        if (remain == 0) cout << result << "\n";
        else if (remain <= n) cout << result + 1 << "\n";
        else cout << result + 2 << "\n";
    }
    
    return 0;
}
