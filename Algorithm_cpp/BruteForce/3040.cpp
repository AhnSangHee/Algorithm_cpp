//  백설 공주와 일곱 난쟁이
//  3040.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num, sum = 0;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 9; i++) {
        cin >> num;
        v.push_back(num);
        sum += num;
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j) continue;
            if (sum - v[i] - v[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) continue;
                    cout << v[k] << "\n";
                }
                return 0;
            }
        }
    }
    
    return 0;
}
