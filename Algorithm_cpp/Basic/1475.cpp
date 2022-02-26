//  방 번호
//  1475.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string roomNum;
int arr[10];
int cntOf6or9, ans;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> roomNum;
    for (int i = 0; i < roomNum.length(); i++) {
        arr[roomNum[i] - '0']++;
    }
    
    cntOf6or9 = (arr[6] + arr[9] + 1) / 2;
    arr[6] = cntOf6or9;
    arr[9] = cntOf6or9;
    
    for (int i = 0; i < 10; i++) {
        if (arr[ans] < arr[i]) ans = i;
    }
    
    cout << arr[ans] << "\n";
    return 0;
}
