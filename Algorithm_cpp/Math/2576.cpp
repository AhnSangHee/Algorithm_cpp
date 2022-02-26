//  홀수
//  2576.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num, sum, minimum;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 7; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    bool b = false;
    for (int i = 0; i < 7; i++) {
        if (v[i] % 2 != 0) { // 홀수인 경우
            sum += v[i];
            
            if (!b) { // 최솟값이 정해져있지 않은 경우
                b = true;
                minimum = v[i];
            }
        }
    }
    
    if (sum != 0) {
        cout << sum << "\n" << minimum << "\n";
    }
    else cout << -1 << "\n";
    
    return 0;
}
