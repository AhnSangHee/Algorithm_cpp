//  윷놀이
//  2490.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num;
vector<int> v;
int cnt1 = 0, cnt2 = 0; // cnt1 = 0 (배), cnt2 = 1 (등) 의미

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 3; i++) {
        cnt1 = 0; cnt2 = 0;
        for (int j = 0; j < 4; j++) {
            cin >> num;
            
            if (num == 0) cnt1++;
            else cnt2++;
        }
        
        if (cnt1 == 1 && cnt2 == 3) cout << "A\n"; // 도
        else if (cnt1 == 2 && cnt2 == 2) cout << "B\n"; // 개
        else if (cnt1 == 3 && cnt2 == 1) cout << "C\n"; // 걸
        else if (cnt1 == 4 && cnt2 == 0) cout << "D\n"; // 윷
        else if (cnt1 == 0 && cnt2 == 4) cout << "E\n"; // 모
        
    }
    
    return 0;
}
