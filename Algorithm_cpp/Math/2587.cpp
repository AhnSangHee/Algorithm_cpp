//  대표값2
//  2587.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num, sum;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 5; i++) {
        cin >> num;
        
        v.push_back(num);
        sum += num;
    }
    
    sort(v.begin(), v.end()); // 정렬
    
    // 평균, 중앙값 출력
    cout << sum / 5 << "\n" << v[2] << "\n";
    
    return 0;
}
