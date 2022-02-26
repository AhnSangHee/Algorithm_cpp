//  최댓값
//  2562.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num, ans;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 9; i++) {
        cin >> num;
        v.push_back(num);
        
        if (i == 0) ans = num;
        else ans = max(ans, num);
    }
    
    for (int i = 0; i < 9; i++) {
        if (ans == v[i]) cout << ans << "\n" << i + 1 << "\n";
    }
    
    return 0;
}
