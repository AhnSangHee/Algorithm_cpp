//  평균은 넘겠지
//  4344.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int C, N, score, sum, cnt;
double average, result;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> C;
    
    for (int i = 0; i < C; i++) {
        cin >> N;
        sum = 0;
        average = 0;
        cnt = 0;
        v.clear();
        
        for (int j = 0; j < N; j++) {
            cin >> score;
            v.push_back(score);
        }
        
        for (int j = 0; j < N; j++) {
            sum += v[j];
        }
        
        average = sum / N;
        
        for (int j = 0; j < N; j++) {
            if (v[j] > average) {
                cnt++;
            }
        }
        result = (double) (cnt * 100) / N;
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << "\n";
    }
    
    return 0;
}
