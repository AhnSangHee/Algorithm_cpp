//  미로 탐색
//  2178.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/16.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, M;
char arr[101][101]; // 미로 배열
int dist[101][101]; // 거리 계산 배열
queue<pair<int, int>> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    // 거리 계산 배열 초기화
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            dist[i][j] = -1;
        }
    }
    
    cin >> N >> M;
    
    // 미로 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    
    q.push({0, 0}); // (0, 0)부터 시작
    dist[0][0] = 0; // 방문 표시
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue; // 범위 체크
            if (dist[nx][ny] != -1 || arr[nx][ny] == '0') continue; // 이미 방문했거나, 이동할 수 없는 칸일 경우 체크
            
            q.push({nx, ny});
            dist[nx][ny] = dist[x][y] + 1;
        }
    }
    
    // 도착 위치로 이동할 수 있는 경우에만 입력이 주어지므로, 오른쪽 가장 밑에 있는 점을 출력
    // 첫번째 위치부터 카운트하므로, +1 해준다.
    cout << dist[N - 1][M - 1] + 1;
    return 0;
}
