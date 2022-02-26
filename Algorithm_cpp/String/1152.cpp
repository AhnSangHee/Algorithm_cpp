//  단어의 개수
//  1152.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int cnt = 0;
string s;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    getline(cin, s);
    
    if (s[0] == ' ') { // 문자열 앞에 공백이 오는 경우
        cnt++;
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == ' ') {
                cnt++;
            }
        }
        if (s[s.length() - 1] == ' ') cnt--; // 문자열 뒤에 공백이 오는 경우
        cout << cnt << "\n";
    }
    else { // 문자열 앞에 공백이 오지 않는 경우
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                cnt++;
            }
        }
        if (s[s.length() - 1] == ' ') cnt--; // 문자열 뒤에 공백이 오는 경우
        cout << cnt + 1 << "\n";
    }
    
    return 0;
}
