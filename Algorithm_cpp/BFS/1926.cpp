//  그림
//  1926.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/18.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, m;
int arr[501][501];
bool visited[501][501];
int pictureCount = 0; // 그림 갯수
int maxPictureArea = 0; // 가장 넓은 그림의 넓이

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n >> m;
    
    // 그림 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 해당 칸이 0이거나 이미 방문했을 경우 continue
            if (arr[i][j] == 0 || visited[i][j]) continue;
            
            // 그림이 있는 칸일 경우 (시작 칸)
            queue<pair<int, int>> q;
            q.push({i, j});
            visited[i][j] = 1; // 방문 표시
            pictureCount++;
            
            int area = 0; // 그림 넓이
            while (!q.empty()) {
                area++; // 그림 넓이 구하기
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                for (int dir = 0; dir < 4; dir++) {
                    int nx = x + dx[dir];
                    int ny = y + dy[dir];
                    
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue; // 범위 체크
                    if (arr[nx][ny] == 0 || visited[nx][ny]) continue; // 이미 방문했거나 그림이 없는 경우
                    
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
            
            maxPictureArea = max(area, maxPictureArea);
        }
    }
    
    cout << pictureCount << "\n" << maxPictureArea;
    return 0;
}
