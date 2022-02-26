//  다이얼
//  5622.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string num;
int cnt = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> num;
    
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C') cnt += 3;
        else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F') cnt += 4;
        else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I') cnt += 5;
        else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L') cnt += 6;
        else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O') cnt += 7;
        else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S') cnt += 8;
        else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V') cnt += 9;
        else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z') cnt += 10;
    }
    
    cout << cnt << "\n";
    
    return 0;
}
