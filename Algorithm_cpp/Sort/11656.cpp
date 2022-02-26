//  접미사 배열
//  11656.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string s;
vector<string> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        string ss = "";
        for (int j = i; j < s.size(); j++) {
            ss += s[j];
        }
        v.push_back(ss);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    
    return 0;
}
