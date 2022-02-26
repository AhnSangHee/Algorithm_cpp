//  시리얼 번호
//  1431.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;
string s;
vector<string> v;

// 문자열 포함된 숫자의 합을 구하는 함수
int getSum(string a) {
    int len = a.length();
    int sum = 0;
    for (int i = 0; i < len; i++) {
        // sum에 숫자를 더해주기 위해 '0'을 뺐다.
        if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b)  {
    if (a.length() < b.length()) return true;
    else if (a.length() > b.length()) return false;
    else { // 길이가 같을 경우
        int totalA = getSum(a);
        int totalB = getSum(b);
        
        if (totalA < totalB) return true;
        else if (totalA > totalB) return false;
        else return a < b;
    }
}

int main(void) {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < N; i++) {
        cout << v[i] << "\n";
    }
    
    return 0;
}
