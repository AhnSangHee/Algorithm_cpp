//  최소, 최대
//  10818.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, num;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    cout << v[0] << " " << v[N-1] << "\n";
    
    return 0;
}
