//  X보다 작은 수
//  10871.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, X, num;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N >> X;
    
    while (N--) {
        cin >> num;
        if (num < X) cout << num << " ";
    }

    return 0;
}
