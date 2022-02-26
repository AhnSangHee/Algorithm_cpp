//  설탕 배달
//  2839.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N;
int kg5 = 0;
int kg3 = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    kg5 = N / 5; // 먼저 입력 받은 무게로 5kg의 봉지를 몇 개 사용할 수 있는지 5kg 봉지 개수 구하기
    
    while (true) {
        if (kg5 < 0)  {
            cout << -1 << "\n";
            return 0;
        }
        if ((N - (5 * kg5)) % 3 == 0) { // N에서 5kg * 봉지 수를 뺀 값이 3으로 나누어 떨어지면, 정확.
            kg3 = ((N - (5 * kg5)) / 3); // 3kg 봉지 개수 구하기
            break;
        }
        kg5--; // 위의 if문에서 3으로 나누어 떨어지지 않는다면, 5kg 봉지 수 줄여가며 체크
    }
    
    cout << kg5 + kg3 << "\n";
    return 0;
}
