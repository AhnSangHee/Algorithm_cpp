//  주사위 세개
//  2480.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num;
vector<int> v;
int cnt = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 3; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    if ((v[0] == v[1]) && (v[1] == v[2])) {
        cout << 10000 + v[0] * 1000 << "\n";
    }
    else if (v[0] == v[1] || v[1] == v[2]) {
        if (v[0] == v[1]) {
            cout << 1000 + v[0] * 100 << "\n";
        }
        else if (v[1] == v[2]) {
            cout << 1000 + v[1] * 100 << "\n";
        }
    }
    else {
        cout << v[2] * 100 << "\n";
    }
    
    return 0;
}
