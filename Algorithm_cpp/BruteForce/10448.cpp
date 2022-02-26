//  유레카 이론
//  10448.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int T, num;
vector<int> v;
bool b = false;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 1; i < 51; i++) {
        v.push_back((i*(i+1))/2); // 삼각수 미리 저장해놓기
    }
    
    cin >> T;
    
    while (T--) {
        cin >> num;
        
        b = false;
        for (int i = 0; i < v.size(); i++) {
            if (b) break;
            for (int j = 0; j < v.size(); j++) {
                if (b) break;
                for (int k = 0; k < v.size(); k++) {
                    if (b) break;
                    if (v[i] + v[j] + v[k] == num) {
                        b = true;
                        break;
                    }
                }
            }
        }
        if (b) cout << "1" << "\n";
        else cout << "0" << "\n";
    }
    return 0;
}
