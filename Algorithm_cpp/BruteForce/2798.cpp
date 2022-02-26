//  블랙잭
//  2798.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v, vv;
int ans = 0, result = 0;
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n >> m; // n개의 숫자 중 3개의 합이 m에 가까워야한다 (n개 중 3개의 숫자 뽑음)
    // n = 5, m = 21
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num); // n개의 숫자를 배열에 넣음
        // 5개 들어감
    }
    
    for (int i = 0; i < n-3; i++) {
        vv.push_back(0); // vv[0], vv[1]에 0 넣어줌
    }
    
    for (int i = 0; i < 3; i++) {
        vv.push_back(1); // vv[2], vv[3], vv[4]에 1 넣어줌
    }
    
    do {
//        for (int i = 0; i < vv.size(); i++) {
//            cout << vv[i];
//        }
//        cout << "\n";
//        00111
//        01011
//        01101
//        01110
//        10011
//        10101
//        10110
//        11001
//        11010
//        11100
        int sum = 0;
        for (int i = 0; i < vv.size(); i++) {
            if (vv[i] == 1) {
                // sum에다가 v[i] 더해주기 => 뽑힌 숫자의 합 얻을 수 있다.
                sum += v[i];
            }
        }
        
        if (sum > m) {
            continue;
        }
        else {
            // 답을 계속 갱신해준다
            ans = max(ans, sum);
        }
    } while(next_permutation(vv.begin(), vv.end()));
    
    cout << ans << "\n";
    
    return 0;
}
