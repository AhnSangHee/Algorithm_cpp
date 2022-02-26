//  윤년
//  2753.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int year;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> year;
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) cout << "1" << "\n";
    else cout << "0" << "\n";
    
    return 0;
}
