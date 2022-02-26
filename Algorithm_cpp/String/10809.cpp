//  알파벳 찾기
//  10809.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char word[101];
int arr[26];

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 26; i++) {
        arr[i] = -1; // 초기화
    }
    
    cin >> word; // 단어
    
    for (int i = 0; i < strlen(word); i++) {
        for (int j = 0; j < strlen(alphabet); j++) {
            if (word[i] == alphabet[j]) {
                if (arr[j] != -1) continue; // 이미 나왔던 부분. 처음으로 나온 부분만 체크
                arr[j] = i;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
