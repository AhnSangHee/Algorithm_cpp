//  별 찍기 - 7
//  2444.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, temp;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    temp = N - 1;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        // 뒷부분 출력하면 출력 형식이 잘못된다고 나옴
    //       for (int j = 0; j < temp; j++) {
    //           cout << " ";
    //        }
        cout << "\n";
        temp--;
    }
    
    temp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = i; j < 2 * N - (i+1); j++) {
            cout << "*";
        }
        cout << "\n";
        temp++;
    }
        
    return 0;
}
