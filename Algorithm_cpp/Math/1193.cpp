//  분수찾기
//  1193.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int X; // 입력 받는 숫자
int idx = 1; // 분수의 순서
int group = 1; // 그룹 번호
int groupIdx = 1; // 그룹 내에서의 인덱스
int sum = 0;
int cnt = 0; // 찾고자 하는 숫자가 존재하는 그룹 이전의 그룹들이 갖는 분수의 개수
int a = 0, b = 0; // 분자, 분모

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> X;
    
    for (group = 1; sum < X; group++) {
        sum += group; // 주어진 숫자가 존재하는 그룹 번호 찾기
    }
    group--;
    
    for (int i = 1; i < group; i++) {
        cnt += i; // 찾고자 하는 숫자가 존재하는 그룹 이전의 그룹들이 갖는 분수의 개수 구하기
    }
    cnt++;
    
    for (; cnt != X; groupIdx++) {
        cnt += 1;
    }
    
    if (group % 2 != 0) { // 홀수 그룹
        a = group - groupIdx + 1;
        b = groupIdx;
    }
    else { // 짝수 그룹
        a = groupIdx;
        b = group - groupIdx + 1;
    }
    
    cout << a << "/" << b << "\n";
    
    return 0;
}
