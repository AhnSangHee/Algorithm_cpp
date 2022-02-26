//  두 수의 합
//  3273.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, num, target, cnt, head, tail;
vector<int> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    cin >> target;
    
    head = 0;
    tail = n-1;
    
    while (head < tail) {
        int sum = v[head] + v[tail];
        
        if (sum == target) {
            head++;
            tail--;
            cnt++;
        }
        else if (sum > target) tail--;
        else head++;
        
    }

    cout << cnt << "\n";
    
    return 0;
}
