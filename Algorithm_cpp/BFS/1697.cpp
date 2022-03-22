//  숨바꼭질
//  1697.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/22.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, K;
int arr[100001] = {0, };
int dist[100001] = {0, }; // 초기값은 모두 0
queue<int> q;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> K;
    
    q.push(N);
    dist[N] = 1;
    
    while (dist[K] == 0) { // 동생 좌표에 해당하는 배열 값이 0이 아닌 값을 갖는다면 방문한 것이므로 while문 탈출
        int x = q.front();
        q.pop();
    
        int dx[3] = { -1, 1, x }; // 앞, 뒤, 2배
        for (int dir = 0; dir < 3; dir++) {
            int nx = x + dx[dir];
            
            if (nx < 0 || nx > 100000) continue; // 범위 밖
            if (dist[nx] != 0) continue; // 이미 방문한 경우
            
            q.push(nx);
            dist[nx] = dist[x] + 1;
        }
    }
    
    cout << dist[K] - 1; // 처음 시작 지점 (수빈)에 0이 아닌 1을 넣어주었기 때문에 1을 빼주어야한다.
    return 0;
}
