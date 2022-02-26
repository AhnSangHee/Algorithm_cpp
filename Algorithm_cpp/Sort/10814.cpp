//  나이순 정렬
//  10814.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, age;
string name;
vector<pair<int, string>> v; // (나이, 이름) 저장

bool comp(const pair<int, string> &p1,const pair<int, string> &p2){
    // 나이 다르면
    return p1.first < p2.first; // 나이 적은 사람이 앞으로
}

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        v.push_back(make_pair(age, name)); // (나이, 이름) 저장
    }
    
    // 이를 사용하면 동일한 정렬 기준을 가진 순서가, 정렬 이후에도 유지가 된다.
    stable_sort(v.begin(), v.end(), comp);
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}
