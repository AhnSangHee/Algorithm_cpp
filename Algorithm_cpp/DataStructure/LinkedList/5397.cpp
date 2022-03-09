//  키로거
//  5397.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/04.
//

#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int N;
string s;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    while (N--) {
        cin >> s;
        list<char> l;
        auto p = l.begin();
        
        for (auto ch: s) {
            if (ch == '<') {
                if (p != l.begin()) p--;
            } else if (ch == '>') {
                if (p != l.end()) p++;
            } else if (ch == '-') {
                if (p != l.begin()) {
                    p--;
                    p = l.erase(p);
                }
            } else {
                l.insert(p, ch);
            }
        }
        
        for (auto ch: l) {
            cout << ch;
        }
        cout << "\n";
    }
    
    return 0;
}
