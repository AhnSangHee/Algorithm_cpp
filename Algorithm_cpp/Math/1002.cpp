//  터렛
//  1002.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>

using namespace std;

int T, a1, b1, r1, a2, b2, r2;
int a, b, s;
int check1, check2;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> T;
    
    while (T--) {
        cin >> a1 >> b1 >> r1 >> a2 >> b2 >> r2;
        
        a = (a2-a1) * (a2-a1);
        b = (b2-b1) * (b2-b1);
                
        s = a + b; // 두 중심 사이의 거리를 더한 후 제곱한 값
        check2 = (r1 + r2) * (r1 + r2); // 두 반지름의 거리를 더한 후 제곱한 값 (r + r')^2
        
        // 긴 반지름에서 작은 반지름을 빼고 제곱한 값 (r' - r)^2
        if (r1 > r2) check1 = (r1 - r2) * (r1 - r2);
        else if (r1 < r2) check1 = (r2 - r1) * (r2 - r1);
        else if (r1 == r2) check1 = 0;
            
        if (s == 0) { // 중심이 같을 경우
            if (r1 == r2) cout << "-1" << "\n"; // 두 원이 일치
            else cout << "0" << "\n"; // 동심원
        }
        else if (check1 == s || check2 == s) cout << "1" << "\n"; // 한 점에서 만나는 경우
        else if (check1 < s  && s < check2) cout << "2" << "\n"; // 두 점에서 만나는 경우
        else cout << "0" << "\n";
    }
    
    return 0;
}
