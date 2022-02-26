//  적어도 대부분의 배수
//  1145.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a, b, c, d, e;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> a >> b >> c >> d >> e;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    
    for (int i = 1; ; i++) { // i : 정답이 되는 수
        int cnt = 0;
        for (int j = 0; j < 5; j++) {
            if (i % v[j] == 0) { // 나머지가 0이라면 (딱 나누어떨어진다면)
                cnt++;
                
                if (cnt >= 3) { // 만족하는 수가 3개 이상일 경우
                    cout << i;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
