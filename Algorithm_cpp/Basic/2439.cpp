//  별 찍기 - 2
//  2439.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
