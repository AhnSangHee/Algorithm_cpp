//  더하기 사이클
//  1110.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int N, A, B;
int cnt = 0;
int sum = 0;
int NEW;

int Compare(int num) {
    if (num < 10) {
        A = 0;
        B = num;
        sum = A + B;
        NEW = B * 10 + sum % 10;
        cnt++;
        
        if (NEW == N) return cnt;
        else Compare(NEW);
    }
    else {
        A = num / 10;
        B = num % 10;
        sum = A + B;
        NEW = B * 10 + sum % 10;
        cnt++;
        
        if (NEW == N) return cnt;
        else Compare(NEW);
    }
    return 0;
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    if (N == 0) cout << "1" << "\n";
    else {
        while (N != NEW) {
            Compare(N);
        }
        cout << cnt << "\n";
    }

    return 0;
}
