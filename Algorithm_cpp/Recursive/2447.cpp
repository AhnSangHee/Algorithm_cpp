//  별 찍기 - 10
//  2447.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

void star(int x, int y, int n) {
    if ((x/n) % 3 == 1 && (y/n) % 3 == 1) cout << ' ';
    else {
        if (n / 3 == 0) cout << '*';
        else star(x, y, n/3);
    }
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            star(i, j, n);
        }
        cout << "\n";
    }
    
    return 0;
}
