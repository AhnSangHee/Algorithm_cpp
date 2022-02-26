//  듣보잡
//  1764.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int n, m;
int cnt = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n >> m;
    
    set<string> name, result;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        name.insert(s); // 듣도 못한 사람의 이름
    }
    
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s; // 보도 못한 사람의 이름 입력받기
        
        if (name.find(s) != name.end()) { // 중복이 없다면
            result.insert(s); // 보도 못한 사람의 이름 추가
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    
    for (string s : result) {
        cout << s << "\n"; // 듣도 보도 못한 사람의 이름 출력
    }
    
    return 0;
}
