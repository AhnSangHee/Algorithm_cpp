//  토마토
//  7576.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/18.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int M, N, answer = 0;
int tomato[1001][1001];
queue<pair<int, int>> q; // 익은 토마토 넣을 배열

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1};

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tomato[i][j];
            
            if (tomato[i][j] == 1) q.push({i, j}); // 익은 토마토 넣기
        }
    }
    
    // 익은 토마토에 대해 BFS
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            // 토마토 배열의 범위 벗어나는 경우
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            
            // 토마토가 익지 않은 경우만 체크. 이미 익은 경우는 넘어간다.
            // 토마토 익히고 (거리 더하고) 큐에 넣기 (익은 토마토에 대해 BFS)
            if (tomato[nx][ny] == 0) {
                q.push({nx, ny});
                tomato[nx][ny] = tomato[x][y] + 1;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 0) {
                // 익지 않은 토마토가 존재할 경우
                cout << "-1\n";
                return 0;
            }
            answer = max(tomato[i][j], answer);
        }
    }
    
    cout << answer - 1;
    return 0;
}
