//  ACM 호텔
//  10250.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, H, W, N;
int floors, roomSeq, room; // 층, 엘리베이터로부터 센 방의 순서, 방 번호

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> T;
    
    while (T--) {
        cin >> H >> W >> N;
        
        if ((N % H) == 0) {
            floors = H;
            roomSeq = N / H;
        }
        else {
            floors = N % H;
            roomSeq = N / H + 1;
        }
        
        // 출력 맞춰주기
        if (roomSeq >= 10) {
            cout << floors << roomSeq << "\n";
        }
        else {
            cout << floors << "0" << roomSeq << "\n";
        }
    }
    
    return 0;
}
