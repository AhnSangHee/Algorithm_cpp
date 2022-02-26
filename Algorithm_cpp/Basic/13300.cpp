//  방 배정
//  13300.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N, K, Y; // 참가 학생 수, 한 방에 배정 가능한 최대 인원, 학년
bool S; // 성별 (0: 여학생, 1: 남학생)
int G[7] = {0, }, B[7] = {0, };
int room = 0; // 필요한 방 갯수

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> N >> K;

    while (N--) {
        cin >> S >> Y;
        // 학년 업데이트
        if (S) { // 남성
            B[Y]++;
        }
        else { // 여성
            G[Y]++;
        }
    }

    // boy : 남자 방의 수, girl : 여자 방의 수
    // 최대 인원 (K)으로 나누고, 만약 나머지가 있다면 나머지를 구해서 필요한 방의 갯수를 늘려주었다.
    // 만약 나눈 결과값의 나머지가 0이 아니라면, 방이 추가로 필요한 것이므로, 해당하는 boy 또는 girl 값을 +1 해준다.
    for (int i = 1; i <= 6; i++) {
        int boy = B[i] / K;
        int girl = G[i] / K;
        if ((B[i] % K) != 0) boy++;
        if ((G[i] % K) != 0) girl++;
        
        room += boy + girl; // 방의 갯수를 추가해준다.
    }
    cout << room << "\n";
    return 0;
}
