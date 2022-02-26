//  통계학
//  2108.cpp
//  Algorithm_Baekjoon

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int N, num;
double sum = 0;
vector<int> v;

// sort 기준
bool comp(const pair<int, int> &p1,const pair<int, int> &p2){
    if(p1.second == p2.second){ // 빈도수가 같으면
        return p1.first < p2.first; // 숫자(num) 작은게 앞으로
    }
    return p1.second > p2.second; // 다르면 빈도수가 큰게 앞으로
}
 
int main(void){
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    cin >> N;
    
    for(int i = 0; i < N ;i++){
        cin >> num;
        v.push_back(num);
        sum += num;
    }
    
    sort(v.begin(), v.end());
    
    // 산술평균 출력
    // 내림함수를 이용하여 반올림
    cout << (int)floor((sum/N) + 0.5) << "\n";
    
    // 중앙값
    cout << v[N/2] << "\n";
    
    // 최빈값
    vector<pair<int,int>> vv; // num와 빈도수를 저장할 pair형 vector.
    
    for(int i = 0; i < v.size(); i++){
        if(vv.empty()){
            vv.push_back(pair<int,int>(v[i],1));
            continue;
        }
 
        if(vv.back().first == v[i]){ // 같은게 있다면
            pair<int, int> tmp = vv.back();
            tmp.second++; // 하나 증가
            vv.pop_back(); // 기존 것 없애고
            vv.push_back(tmp); // 새로운 것 다시 삽입
        }
        else{
            vv.push_back(pair<int,int>(v[i],1));
        }
    }
    
    // 빈도수가 높고, 숫자(num)가 낮은 순으로 정렬
    sort(vv.begin(), vv.end(), comp);
    
    if(vv[0].second == vv[1].second){
        cout << vv[1].first << "\n";
    }
    else{
        cout << vv[0].first << "\n";
    }
    
    // 범위
    cout << v.back() - v.front() << "\n";
    
    return 0;
}
