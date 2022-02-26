//  별 찍기 - 5
//  2442.cpp
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
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < temp; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        // 뒷부분 출력하면 출력 형식이 잘못된다고 나옴
//        for (int j = 0; j < temp; j++) {
//            cout << " ";
//        }
        cout << "\n";
        temp--;
    }
    
    return 0;
}
