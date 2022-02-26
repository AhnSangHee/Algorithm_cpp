//  달팽이는 올라가고 싶다
//  2869.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B, V;
int ans = 0; // 달팽이가 정상 높이에 도달하는데 걸리는 날의 수

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> V;
    
    // (V-A)/(A-B) 는 정상 높이에 도달하기 바로 전 날 까지 걸리는 날의 수이므로 1을 더해줘야 전체 걸리는 날의 수가 된다.
    ans = (V-A) / (A-B) + 1;
    
    // 나머지 처리
    if (((V-A) % (A-B)) != 0) { // 나머지가 존재할 경우
        cout << ans + 1 << "\n";
    }
    else { // 나머지가 존재하지 않는 경우
        cout << ans << "\n";
    }
    return 0;
}
