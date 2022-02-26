//  애너그램 만들기
//  1919.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;
int arr1[26], arr2[26];
int cnt = 0;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> s1 >> s2;
    
    // 알파벳 개수 저장.
    // index 0 : a가 나온 횟수, index 1 : b가 나온 횟수, ..
    for (int i = 0; i < s1.length(); i++) {
        arr1[s1[i]-'a']++;
    }
    for (int i = 0; i < s2.length(); i++) {
        arr2[s2[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            if (arr1[i] > arr2[i]) {
                cnt = cnt + arr1[i] - arr2[i];
            } else if (arr1[i] < arr2[i]) {
                cnt = cnt + arr2[i] - arr1[i];
            } 
        }
    }
    
    cout << cnt << "\n";
    return 0;
}
