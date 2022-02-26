//  분해합
//  2231.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, creator, sum;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    creator = 1; // 1부터 시작
        
    while(true) {
        int temp = creator;
        sum = creator; // 합 = 생성자의 값 + 생성자의 각 자리의 숫자의 합인데, 여기서 생성자의 합만 더함.
        
        while (temp != 0) { // 생성자의 각 자리의 숫자 더하기
            sum += temp % 10;
            temp /= 10;
        }
        
        if (N == creator || N == sum) {
            // 입력 받는 수 = 생성자 (생성자 없음) 또는 입력 받는 수 = 다 더한 값 (생성자 존재) 이면 break
            break;
        }
        creator++;
    }
        
    if (creator == N) cout << "0" << "\n";
    else cout << creator << "\n";
    
    return 0;
}
