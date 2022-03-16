//  촌수계산
//  2644.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/16.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, a, b, m, x, y;
vector<int> v[101];
int dist[101];
queue<int> q;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    // 배열 초기화
    for (int i = 0; i < 101; i++) {
        dist[i] = -1;
    }
    cin >> n >> a >> b >> m;
    
    // 그래프 생성
    while (m--) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    q.push(a); // a부터 방문
    dist[a] = 0; // 방문 표시
    
    // a와 인접한 모든 배열을 BFS로 탐색
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        
        // 인접한 곳 체크
        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i];
            if (dist[nx] != -1) continue; // 이미 방문했다면 continue
            
            dist[nx] = dist[x] + 1;
            q.push(nx);
        }
    }
    
    cout << dist[b];
    return 0;
}
