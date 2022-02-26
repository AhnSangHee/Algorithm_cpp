//  덩치
//  7568.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, kg, height, ranker;
vector<pair<pair<int, int>, int>> v; // 키, 몸무게, 등수

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    ranker = 1; // 초기 등수는 모두 1등
    while (N--) {
        cin >> kg >> height;
        v.push_back(make_pair(make_pair(kg, height), ranker));
    }
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (i == j) continue;
            else if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second) {
                // 키와 몸무게가 모두 작으면 등수가 뒤로 밀려난다.
                v[i].second++;
            }
        }
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].second << " ";
    }
    cout << "\n";
    return 0;
}
