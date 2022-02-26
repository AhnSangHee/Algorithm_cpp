//  카드 역배치
//  10804.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int x, y;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    vector<int> v;
    
    for (int i = 1; i <= 20; i++) {
        v.push_back(i); // v에는 0~20까지의 숫자가 저장되어있음
    }
    
    for (int i = 0; i < 10; i++) {
        vector<int> vv; // 값을 복사할 임시 배열
        
        cin >> x >> y;
    
        for (int j = x - 1; j <= y - 1; j++) {
            vv.push_back(v[j]); // 바꿀 값 저장
        }
        reverse(vv.begin(), vv.end()); // 순서 뒤집기
        
        for (int j = 0; j < vv.size(); j++) {
            v[x + j - 1] = vv[j]; // 원래 배열에 값 바꿔서 저장해주기
        }
    }
    
    for (int i = 0; i < 20; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
