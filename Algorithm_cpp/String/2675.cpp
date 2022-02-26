//  문자열 반복
//  2675.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int T, repeat;
string s;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> repeat >> s;
        
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < repeat; j++) {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
