//  나머지
//  3052.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int num, result;
int arr[45] = {0, };
int cnt = 0;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        result = num % 42;
        arr[result]++;
    }
    
    for (int i = 0; i < 43; i++) {
        if (arr[i] == 0) continue;
        else cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
