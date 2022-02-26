//  벌집
//  2292.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, room; // 입력, 그룹 내 방의 개수 (방의 개수는 그룹 1만 1개, 그 다음 그룹부터는 6의 배수만큼 증가)
int group = 0; // 1(그룹 1), 2~7(그룹 2), 8~19(그룹 3), 20~37(그룹 4), 38~61(그룹 5), 62~91(그룹 6), ..

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    group = 1;
    
    if (N == 1) {
        cout << group << "\n";
    }
    else {
        for (int i = 1; i < N; group++) { // i는 방의 번호
            i += 6 * group;
            // i = 1 (각 그룹의 제일 마지막 방)부터 시작해야 group 값과 방의 개수를 match 시킬 수 있다
        }
        cout << group << "\n";
    }
    return 0;
}
