//  좌표 정렬하기 2
//  11651.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, a, b;
vector<pair<int, int>> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < N; i++) {
        cout << v[i].second << " " << v[i].first << "\n";
    }
    return 0;
}
