//  직사각형에서 탈출
//  1085.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int x, y, w, h;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> x >> y >> w >> h;
    
    v.push_back(x);
    v.push_back(w-x);
    v.push_back(y);
    v.push_back(h-y);
    
    sort(v.begin(), v.end());
    
    cout << v[0] << "\n";
    return 0;
}
