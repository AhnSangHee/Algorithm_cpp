//  평균 점수
//  10039.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int score, total;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 5; i++) {
        cin >> score;
        
        if (score < 40) score = 40;
        total += score;
    }
    
    cout << total/5;
    return 0;
}
