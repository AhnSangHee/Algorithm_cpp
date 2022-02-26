//  그대로 출력하기 2
//  11719.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (getline(cin, s)) { // 한 줄 입력받기
        cout << s << "\n"; // 출력
    }
    
    return 0;
}
