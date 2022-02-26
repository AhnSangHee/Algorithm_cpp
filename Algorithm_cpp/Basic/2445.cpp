//  별 찍기 - 8
//  2445.cpp
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

    temp = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < temp; j++) {
            cout << "*";
        }
        for (int j = i + 1; j < 2 * N - (i+1); j++) {
            cout << " ";
        }
        for (int j = 0; j < temp; j++) {
            cout << "*";
        }
        cout << "\n";
        temp++;
    }
    
    temp = N - 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < temp; j++) {
            cout << "*";
        }
        for (int j = 0; j <= i * 2 + 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < temp; j++) {
            cout << "*";
        }
        cout << "\n";
        temp--;
    }
        
    return 0;
}
