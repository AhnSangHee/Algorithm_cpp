//  스택 수열
//  1874.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/08.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int n, num;
vector<int> v;
vector<string> vv;
stack<int> st;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        st.push(i+1);
        vv.push_back("+");
        
        if (st.top() != v[j]) continue;
        else {
            while (!st.empty() && st.top() == v[j]) {
                vv.push_back("-");
                st.pop();
                j++;
            }
        }
    }
    
    if (st.empty()) {
        for (int i = 0; i < vv.size(); i++) {
            cout << vv[i] << "\n";
        }
    }
    else cout << "NO" << "\n";
    
    return 0;
}
