//  크로아티아 알파벳
//  2941.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string word;
int cnt = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'c') {
            if (word[i+1] == '=' || word[i+1] == '-')  {cnt++; i += 1;}
            else cnt++; // 문제에서 주어진 크로아티아 알파벳을 제외한 나머지 알파벳 개수 체크
        }
        else if (word[i] == 'd') {
            if (word[i+1] == 'z' && word[i+2] == '=') {cnt++; i += 2;}
            else if (word[i+1] == '-') {cnt++; i += 1;}
            else cnt++;
        }
        else if (word[i] == 'l' && word[i+1] == 'j') {cnt++; i += 1;}
        else if (word[i] == 'n' && word[i+1] == 'j') {cnt++; i += 1;}
        else if (word[i] == 's' && word[i+1] == '=') {cnt++; i += 1;}
        else if (word[i] == 'z' && word[i+1] == '=') {cnt++; i += 1;}
        else cnt++; // 문제에서 주어진 크로아티아 알파벳을 제외한 나머지 알파벳 개수 체크
    }
    cout << cnt << "\n";
    return 0;
}
