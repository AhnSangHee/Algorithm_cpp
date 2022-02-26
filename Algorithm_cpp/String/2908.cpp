//  상수
//  2908.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string A, B;
char temp;
int numA, numB;

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> A >> B;
    
    temp = A[0];
    A[0] = A[2];
    A[2] = temp;
    
    temp = B[0];
    B[0] = B[2];
    B[2] = temp;
    
    numA = atoi(A.c_str());
    numB = atoi(B.c_str());
    
    if (numA > numB) cout << numA << "\n";
    else cout << numB << "\n";
    
    return 0;
}
