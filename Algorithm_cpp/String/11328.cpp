//  Strfry
//  11328.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;
int T;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> s1 >> s2;
        
        bool b = false;
        
        int arr1[26] = {0, };
        int arr2[26] = {0, };
        if (s1.length() != s2.length()) {
            cout << "Impossible\n";
            continue;
        }
        
        for (int i = 0; i < s1.size(); i++) { // 각 단어에 존재하는 알파벳 개수 카운트
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                b = true;
                break;
            }
        }
        
        if (b) cout << "Impossible\n";
        else cout << "Possible\n";
    }
    return 0;
}
