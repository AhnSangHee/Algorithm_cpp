//  연결 요소의 개수
//  11724.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/16.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, u, v;
vector<int> graph[1001];
bool check[1001];
int ans = 0;

void dfs(int x) {
    check[x] = 1; // 방문 표시
    
    for (int i = 0; i < graph[x].size(); i++) {
        // x에 연결된 (인접한) 리스트를 모두 돌면서 방문했는지 체크하고, 방문하지 않았다면 그 정점을 또 DFS 돌린다.
        if (check[graph[x][i]]) continue;
        dfs(graph[x][i]);
    }
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 1; i <= N; i++) {
        if (check[i]) continue; // 이미 방문했으면 continue
        
        dfs(i);
        ans++;
    }
    cout << ans;
    return 0;
}
