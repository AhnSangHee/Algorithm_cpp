//  일곱 난쟁이
//  2309.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int height, sum = 0;
vector<int> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 9; i++) {
        cin >> height;
        v.push_back(height);
        sum += height;
    }
    
    // 난쟁이 9명의 키를 차례대로 정렬
    sort(v.begin(), v.end());
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j) continue; // i와 j가 같은 경우는 제외. 난쟁이 2명은 서로 달라야하기 때문
            if (sum - v[i] - v[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) continue; // i와 j의 값은 빠져야할 값이므로 제외
                    cout << v[k] << "\n"; // 난쟁이 7명의 키 출력
                }
                return 0; // 한 쌍을 찾는 순간 끝내야한다.
            }
        }
    }
    return 0;
}
