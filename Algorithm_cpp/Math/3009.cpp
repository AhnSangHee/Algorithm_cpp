//  네번쨰 점
//  3009.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int a1, b1, a2, b2, a3, b3, a4, b4;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    
    if (a1 == a2) a4 = a3;
    else if (a1 == a3) a4 = a2;
    else a4 = a1;
    
    if (b1 == b2) b4 = b3;
    else if (b1 == b3) b4 = b2;
    else b4 = b1;
    
    cout << a4 << " " << b4 << "\n";
    
    return 0;
}
