//  불
//  4179.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int R, C; // 행, 열
int tomato[1001][1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q1, q2; // 불, 지훈
int dist1[1001][1001], dist2[1001][1001]; // 불의 거리 배열, 지훈이의 거리 배열
char miro[1001][1001]; // 미로

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> R >> C;
    
    // 미로 입력
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> miro[i][j];
            
            if (miro[i][j] == 'F') { // 초기 불의 위치
                q1.push({i, j});
                dist1[i][j] = 1; // 방문 표시 (거리 1)
            }
            if (miro[i][j] == 'J') { // 초기 지훈이 위치
                q2.push({i, j});
                dist2[i][j] = 1; // 방문 표시 (거리 1)
            }
        }
    }
    
    // 불에 대해서 BFS
    while (!q1.empty()) {
        int x = q1.front().first;
        int y = q1.front().second;
        q1.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            // 범위 벗어나는 경우
            if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            
            // 벽이거나, 이미 방문했거나, 불이 났을 경우
            if (miro[nx][ny] == '#' || miro[nx][ny] == 'F' || dist1[nx][ny] != 0) continue;
            
            dist1[nx][ny] = dist1[x][y] + 1; // 거리 더해주기
            q1.push({nx, ny});
        }
    }
    
    // 지훈이에 대해서 BFS
    while (!q2.empty()) {
        int x = q2.front().first;
        int y = q2.front().second;
        q2.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            // 범위를 벗어났다는 것은 탈출에 성공한 것
            if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
                cout << dist2[x][y];
                return 0;
            }
            
            // 이미 방문했거나, 벽이거나, 불이 났을 경우
            if (dist2[nx][ny] != 0 || miro[nx][ny] == '#' || miro[nx][ny] == 'F') continue;
            
            // 지훈이가 도착한 시간과 동시에 불이 도착하거나, 혹은 자신보다 더 빨리 불이 도착하는 자리로는 갈 수 없음
            // 불이 퍼졌거나, 지훈이보다 불이 먼저 퍼질 경우
            // 여기서 dist1[nx][ny] <= dist2[x][y] + 1에서, dist2[nx][ny]가 아닌 dist2[x][y] + 1을 해주는 이유는
            // dist2[nx][ny]의 값은 아직 계산되지 않았기 때문이다.
            if (dist1[nx][ny] != 0 && (dist1[nx][ny] <= dist2[x][y] + 1)) continue;
            
            dist2[nx][ny] = dist2[x][y] + 1;
            q2.push({nx, ny});
        }
    }
    
    cout << "IMPOSSIBLE\n";
    return 0;
}
