//  약수 구하기
//  2501.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K, ans;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) v.push_back(N / i);
    }
    
    sort(v.begin(), v.end());
    
    if (v.size() < K) cout << "0\n";
    else cout << v[K-1] << "\n";

    return 0;
}
