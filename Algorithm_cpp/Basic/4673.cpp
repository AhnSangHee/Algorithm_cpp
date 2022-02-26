//  셀프 넘버
//  4673.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int result = 0;
int arr[10050] = {0, };

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 1; i <= 10000; i++) {
        if (i < 10) {
            // 10 미만의 숫자 중에서 홀수는 무조건 다 셀프 넘버
            arr[i * 2] = 1; // 생성자가 있는 숫자는 1로 체크
        }
        else if (i < 100) {
            result = i + (i / 10) + (i % 10); // result = d(n)
            arr[result] = 1;
        }
        else if (i < 1000) {
            result = i + (i / 100) + ((i % 100) / 10) + i % 10;
            arr[result] = 1;
        }
        else if (i < 10000) {
            result = i + (i / 1000) + ((i % 1000) / 100) + ((i % 100) / 10) + i % 10;
            arr[result] = 1;
        }
    }
    
    for (int i = 1; i <= 10000; i++) {
        if (arr[i] == 1) continue;
        else {
            cout << i << "\n";
        }
    }
    return 0;
}
