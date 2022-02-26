//  체스판 다시 칠하기
//  1018.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 50;
string chess[MAX];
int n, m;

// (0,0)에 흰색이 먼저 올 경우
string whiteFirst[8] = {
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"}
};

// (0,0)에 검은색이 먼저 올 경우
string blackFirst[8] = {
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"}
};

int Compare(int x, int y) {
    int whiteCnt = 0, blackCnt = 0;
    
    // x, y에서 +8까지 바꿔야하는 수를 count
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // 흰색으로 시작하는 체스판을 만들기 위해 수정해야 하는 칸 수
            if (whiteFirst[i][j] != chess[x+i][y+j]) whiteCnt++;
            // 검은색으로 시작하는 체스판을 만들기 위해 수정해야 하는 칸 수
            if (blackFirst[i][j] != chess[x+i][y+j]) blackCnt++;
        }
    }
    int ans = min(whiteCnt,blackCnt);
    return ans;
}

int main(void) {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> chess[i];
    }
    
    int result = 999999999;
    
    for (int i = 0; i+8 <= n; i++) {
        for (int j = 0; j+8 <= m; j++) {
            // i, j로 시작점 확인
            result = min(result, Compare(i, j)); // 최소값 구하기
        }
    }
    cout << result << "\n";
    return 0;
}
