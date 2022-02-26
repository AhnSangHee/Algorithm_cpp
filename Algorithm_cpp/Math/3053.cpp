//  택시 기하학
//  3053.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int r; // 반지름
double area, area2; // 유클리드 넓이, 택시 넓이

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);

    cin >> r;
    area = r * r * M_PI;
    area2 = r * r * 2;
    
    cout << fixed;
    cout.precision(6);
    cout << area << "\n" << area2 << "\n";
    
    return 0;
}
