//  개수 세기
//  10807.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, target, ans;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        v.push_back(num);
    }
    
    cin >> target;
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) ans++;
    }
    
    cout << ans << "\n";
    return 0;
}
