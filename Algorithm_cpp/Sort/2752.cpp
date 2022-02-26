//  세수정렬
//  2752.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num;
vector<int> v;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    for (int i = 0; i < 3; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
