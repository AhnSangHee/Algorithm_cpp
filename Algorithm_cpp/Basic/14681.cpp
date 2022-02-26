//  사분면 고르기
//  14681.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int x, y;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> x >> y;
    
    if (x > 0 && y > 0) cout << "1" << "\n";
    else if (x < 0 && y > 0) cout << "2" << "\n";
    else if (x < 0 && y < 0) cout << "3" << "\n";
    else cout << "4" << "\n";
    
    return 0;
}
