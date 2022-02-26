//  하노이 탑 이동 순서
//  11729.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, cnt = 0;
vector<pair<int, int>> v;

void HanoiTowerMove(int num, int src, int mid, int des) {
    // src에 꽂혀있는 num개의 원반을 mid를 거쳐서 des로 이동
    // src : 출발 막대 1, mid : 중간 막대 2, des : 도착 막대 3
    cnt++;
    if (num == 1) { // 이동할 원반의 수가 1개일 경우
        // 원반 1을 출발지 src에서 목적지 des로 이동
        v.push_back(make_pair(src, des));
    } else {
        // 먼저 src에서 mid로 n-1개의 원반을 이동
        HanoiTowerMove(num-1, src, des, mid);
        
        // 큰 원반 (맨 아래의 원반) 1개를 src에서 des으로 이동
        v.push_back(make_pair(src, des)); // 원반 num을 src에서 des로 이동
        
        // 작은 원반 (n-1개의 원반)들을 mid에서 des으로 이동
        HanoiTowerMove(num-1, mid, src, des);
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N;
    
    HanoiTowerMove(N, 1, 2, 3);
    cout << cnt << "\n";
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}
