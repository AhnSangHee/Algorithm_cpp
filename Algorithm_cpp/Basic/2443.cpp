//  별 찍기 - 6
//  2443.cpp
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
