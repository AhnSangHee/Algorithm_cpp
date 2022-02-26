//  두 수 비교하기
//  1330.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int A, B;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    if (A > B) cout << ">" << "\n";
    else if (A < B) cout << "<" << "\n";
    else cout << "==" << "\n";
    
    return 0;
}
