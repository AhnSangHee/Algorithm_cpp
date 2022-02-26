//  소인수분해
//  11653.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N;
    
    int temp = N;
    for (int i = 2; i <= temp; i++) {
        while (N % i == 0) {
            // 나누어 떨어지면 소인수
            N /= i;
            v.push_back(i);
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}
