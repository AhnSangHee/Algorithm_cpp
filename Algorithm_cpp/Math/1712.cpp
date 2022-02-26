//  손익분기점
//  1712.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B, C;
int ans = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> C;
    
    if (B >= C)  {
        cout << -1 << "\n";
        return 0;
    }
    
    ans = (A / (C - B)) + 1;
    
    if (ans < 1) cout << -1 << "\n";
    else cout << ans << "\n";
    
    return 0;
}
