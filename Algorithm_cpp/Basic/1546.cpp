//  평균
//  1546.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
double score, total, average;
vector<double> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> score;
        v.push_back(score);
    }
    
    sort(v.begin(), v.end());
    
    M = v[N - 1]; // 제일 큰 점수
    
    total = 0;
    
    for (int i = 0; i < N; i++) {
        v[i] = v[i] / M * 100;
        total += v[i];
    }
    
    average = total / N;
    cout << fixed;
    cout.precision(8);
    cout << average << "\n";
    
    return 0;
}
