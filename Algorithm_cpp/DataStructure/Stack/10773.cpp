//  제로
//  10773.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/08.
//

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int K, num, sum = 0;
stack<int> st;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> K;
    
    while (K--) {
        cin >> num;
        
        if (num == 0) st.pop();
        else {
            st.push(num);
        }
    }
    
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    
    cout << sum << "\n";
    return 0;
}
