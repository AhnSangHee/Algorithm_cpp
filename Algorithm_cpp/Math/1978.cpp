//  소수 찾기
//  1978.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, num, cnt = 0;
int check[1001]; // 소수가 아니면 0으로 표시할 체크배열

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        for (int i = 1; i < 1001; i++) {
            // 배열 초기화
            check[i] = i;
        }
        
        cin >> num;
        if (num == 1) continue; // 1은 소수가 아니므로 제외
        for (int i = 2; i <= num; i++) {
            if (check[i] == 0) continue; // 이미 체크한 값은 0으로 초기화
            for (int j = i * 2; j <= num; j += i) {
                // 해당하는 숫자 배수의 인덱스를 모두 0으로 바꿔준다.
                check[j] = 0;
            }
        }
        if (check[num] != 0) cnt++;
    }
    
    cout << cnt << "\n";
    return 0;
}
