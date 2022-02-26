//  상근날드
//  5543.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int price;
vector<int> burger, drink;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    for (int i = 0; i < 3; i++) {
        cin >> price;
        burger.push_back(price);
    }
    
    for (int i = 0; i < 2; i++) {
        cin >> price;
        drink.push_back(price);
    }
    
    sort(burger.begin(), burger.end());
    sort(drink.begin(), drink.end());
    
    cout << burger.front() + drink.front() - 50;
    
    return 0;
}
