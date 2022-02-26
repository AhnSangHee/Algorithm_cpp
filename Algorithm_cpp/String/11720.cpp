//  숫자의 합
//  11720.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, sum = 0;
char num[101];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> num;
    
    for (int i = 0; i < N; i++) {
        sum += (num[i] - 48); // 숫자 CHAR(0~9)는 ASCII 코드 48부터 시작하므로, 48을 빼주면 숫자를 얻을 수 있다.
    }
    cout << sum << "\n";
    return 0;
}
