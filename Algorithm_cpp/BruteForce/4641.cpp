//  Doubles
//  4641.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num = 0, cnt = 0;
vector<int> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (true) {
        v.clear();
        cnt = 0;
        
        while(true) {
            cin >> num;
            if (num == -1) return 0; // -1이면 종료
            if (num == 0) break; // 0이면 입력 그만 받기
            v.push_back(num);
        }
        
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(); j++) {
                if (v[i] == v[j] * 2) { // 2배인 것을 카운트하기
                    cnt++;
                    break; // 2배인 것은 하나 존재하므로 2배인 것을 찾으면 break
                }
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}

