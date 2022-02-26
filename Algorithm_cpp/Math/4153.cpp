//  직각삼각형
//  4153.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int a, b, c;
int n1, n2, n3;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    while (true) {
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0) break;
        
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        
        sort(v.begin(), v.end());
        n1 = pow(v[0], 2);
        n2 = pow(v[1], 2);
        n3 = pow(v[2], 2);
        
        if (n3 == n1 + n2) cout << "right" << "\n";
        else cout << "wrong" << "\n";
        v.clear();
    }
    return 0;
}
