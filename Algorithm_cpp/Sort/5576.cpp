//  콘테스트
//  5576.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int score;
int sumW = 0, sumK = 0;
vector<int> v, vv;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    for (int i = 0; i < 10; i++) { // W 대학
        cin >> score;
        v.push_back(score);
    }
    sort(v.begin(), v.end());
    for (int i = 9; i >= 7; i--) {
        sumW += v[i];
    }
    
    for (int i = 0; i < 10; i++) { // K 대학
        cin >> score;
        vv.push_back(score);
    }
    sort(vv.begin(), vv.end());
    for (int i = 9; i >= 7; i--) {
        sumK += vv[i];
    }
    
    cout << sumW << " " << sumK << "\n";
    return 0;
}
