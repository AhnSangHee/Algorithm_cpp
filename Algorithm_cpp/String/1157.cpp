//  단어 공부
//  1157.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'r', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int check[26] = {0, };
int ans = 0;
int idx = 0;
string word;


int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            // 소문자를 대문자로 변환
            word[i] -= 32;
        }
    }
    
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < 26; j++) {
            // A~Z까지의 알파벳을 입력된 단어의 알파벳을 각각 비교
            if (word[i] != alphabet[j]) continue;
            else {
                // 입력된 단어의 알파벳이 알파벳 배열의 값과 일치한다면
                int num = word[i]; // 그 알파벳의 아스키 코드값을 num에 저장한다.
                // check 배열에서, check[0]에는 A, check[1]에는 B, check[2]에는 C에 해당하는 알파벳이 나온 횟수를 +1
                // 이렇게 차례대로 저장하기 위해 check[num - 'A']하여 저장해준다.
                check[num - 'A']++;
            }
        }
    }
    
    bool b = false; // 가장 많이 사용된 알파벳이 여러 개 존재하는 경우를 체크
    for (int i = 0; i < 26; i++) {
        if (ans < check[i]) {
            // 기존에 존재하던 최고 빈도수 값 < 비교하려는 값, ans 갱신해주기
            b = false;
            idx = i;
            ans = check[i];
        }
        else if (ans == check[i]) {
            // 기존에 존재하던 최고 빈도수 값 == 비교하려는 값, ans는 갱신하지 않고, b = true로 바꿔준다.
            idx = i;
            b = true;
        }
    }
    
    if (b) cout << "?" << "\n";
    else cout << alphabet[idx] << "\n";
    
    return 0;
}
