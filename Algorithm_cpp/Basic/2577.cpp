//  숫자의 개수
//  2577.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int A, B, C, total;
int arr[10] = {0, };

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B >> C;
    total = A * B * C;
    
    while (total != 0) {
        arr[total % 10]++; // 일의 자리 숫자부터 카운트
        total /= 10;
    }
    
    for (int i = 0; i <= 9; i++) {
        cout << arr[i] << "\n";
    }
    
    return 0;
}
