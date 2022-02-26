//  알파벳 개수
//  10808.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int arr[26] = {0, };
char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int T, cnt = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < 26; j++) {
            if (s[i] == alphabet[j]) {
                // s[i]가 a이면, arr[0]에 값 저장
                // s[i]가 b이면, arr[1]에 값 저장
                // s[i]가 c이면, arr[2]에 값 저장
                arr[s[i]-'a']++;
                break;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
