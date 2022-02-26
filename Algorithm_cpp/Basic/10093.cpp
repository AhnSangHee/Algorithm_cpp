//  숫자
//  10093.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int cnt;
unsigned long long A, B, numSmall, numBig;
vector<long long> v;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    // A, B 둘 중에 어떤 숫자가 더 큰 숫자인지 알 수 없다.
    if (A > B) {
        numBig = A;
        numSmall = B;
    }
    else {
        numBig = B;
        numSmall = A;
    }

    for (unsigned long long i = numSmall + 1; i < numBig; i++) {
        cnt++;
        v.push_back(i);
    }
    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
