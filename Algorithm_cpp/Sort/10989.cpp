//  수 정렬하기 3
//  10989.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 벡터 이용하면 메모리 초과 오류
int N, num;
int arr[10001] = {0, };

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        arr[num]++;
    }
    
    for (int i = 1; i < 10001; i++) {
        if (arr[i] != 0) {
            int cnt = arr[i];
            while (cnt--) {
                cout << i << "\n";
            }
        }
    }
    
    return 0;
}
