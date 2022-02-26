//  시험 성적
//  9498.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int score;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> score;
    
    if (score >= 90) cout << "A" << "\n";
    else if (score >= 80) cout << "B" << "\n";
    else if (score >= 70) cout << "C" << "\n";
    else if (score >= 60) cout << "D" << "\n";
    else cout << "F" << "\n";
    
    return 0;
}
