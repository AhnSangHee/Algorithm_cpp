//  그룹 단어 체커
//  1316.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N, cnt = 0;
bool check[26];
string word;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    bool b;
    while (N--) {
        cin >> word;
        
        b = false; // 연속된 알파벳인지 아닌지 체크해주는 변수
        
        for (int i = 0; i < 26; i++) {
            check[i] = false;
        }
        
        for (int i = 0; i < word.length(); i++) {
            if (check[word[i]-'a'] == false) {
                // 처음 나온 알파벳이면 나왔다고 체크해주기
                check[word[i]-'a'] = true;
            }
//            else if ((check[word[i]-'a'] == true) && (word[i] == word[i-1])) {
//                // 이전에 나왔던 알파벳이지만, 이전 값과 같은 알파벳이면 (연속된 알파벳이면) 괜찮다
//                continue;
//            }
            else if ((check[word[i]-'a'] == true) && (word[i] != word[i-1])) {
                // 이전에 나왔던 알파벳이지만, 연속된 알파벳이 아니라면 그룹 단어 X
                b = true;
            }
        }
        
        if (b) continue; // 그룹 단어 X
        else cnt++; // 그룹 단어 O
    }
    
    cout << cnt << "\n";
    return 0;
}
