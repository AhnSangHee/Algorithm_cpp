//  단어 정렬
//  1181.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, num;
string s;
vector<pair<int, string>> v; // (단어의 길이, 단어) 저장

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> s;
        v.push_back(make_pair(s.size(), s)); // 단어의 길이와 단어 저장
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i+1]) { // v[i].second == v[i+1].second 해줘도, 안해줘도 상관없다
            v.erase(v.begin() + i); // 같은 단어는 삭제
            i--; // 기존의 i+1 다음의 원소 (i+2)도 i와 같은지 비교하기 위해 1을 빼준다.
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].second << "\n";
    }
    
    return 0;
}
