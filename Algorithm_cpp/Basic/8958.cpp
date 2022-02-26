//  OX퀴즈
//  8958.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int T, score, temp;
char arr[80];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> arr; // OX 퀴즈 결과 입력받기
        score = 0;
        temp = 0;
        
        for (int i = 0; i < strlen(arr); i++) {
            if (arr[i] == 'O') {
                temp++; // 연속으로 O가 나오면 1씩 올려주기
                score += temp;
            }
            else {
                temp = 0; // X가 나오면 다시 초기화
            }
        }
        cout << score << "\n";
    }
    return 0;
}
