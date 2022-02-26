//  소트인사이드
//  1427.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, num;
vector<int> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    int temp = N;
    
    while (N) { // 반복문으로 각 자리의 숫자를 배열에 저장
        temp = N % 10;
        
        v.push_back(temp); // 벡터에 넣기
        N /= 10;
    }
    
    sort(v.rbegin(), v.rend()); // 내림차순 정렬
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    
    return 0;
}
