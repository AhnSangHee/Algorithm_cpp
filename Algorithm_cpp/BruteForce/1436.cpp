//  영화감독 숌
//  1436.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n; // 입력 받는 수 (666을 갖는 수들 중 몇 번째의 수를 원하는지)
int cnt = 0; // 666을 연속적으로 갖는 수들 중 몇 번째 숫자인지 체크

int main() {
    int i, temp;
    cin >> n;
    
    i = 665; // 666부터 체크하기 위해서, while문 위에서 i = 665로 두었다.
    // 만약 i = 666부터 하면, 667부터 체크하게 된다.
    
    while (cnt != n)
    {
        // 입력한 숫자와 666이 들어간 숫자의 갯수가 같을 때까지 while문 반복
        // i를 계속 1씩 증가시키면서 666이 포함되는지 체크하기
        i++; // 666이 안들어가면 또 1 증가시켜서 다시 체크
        temp = i;
        
        while (temp != 0)
        {
            if (temp % 1000 == 666)
            {   // 먼저 백, 십, 일의 자리 숫자에 666 있는지 체크
                // 666이 3개 연속으로 들어가면
                cnt++; // 갯수 증가시키기
                break;
            }
            else temp /= 10;
            // 없으면 천, 백, 십의 자리에 666 있는지 체크
            // 또 없으면 만, 천, 백의 자리에 666 있는지 체크
        }
    }
    cout << i << "\n";
    return 0;
}
