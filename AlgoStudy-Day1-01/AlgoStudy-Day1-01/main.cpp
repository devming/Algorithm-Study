//
//  main.cpp
//  AlgoStudy-Day1-01
//
//  Created by Minki on 2018. 3. 11..
//  Copyright © 2018년 devming. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool flag[28] = {false};

int main() {
    int T;
    cin >> T;
    
    string s;
    
    while(T--) {
        cin >> s;
        unsigned long cnt = s.length();
        
        for(int i=0; i<cnt; i++) {
            int idx = int(s[i]-97);
            if(flag[idx]) {// 종료조건
                cout << s[i] << endl;
                flag[27] = true;
                break;
            }
            else {
                int idx = int(s[i]-97);
                flag[idx] = true;
            }
        }
        if (!flag[27])
            cout<<"This word doesn't have duplicated character."<<endl;
        
        memset(flag, false, 28);
    }
    return 0;
}




/** 연습 문제2
 
 int arr[10001];
 
 
 
 int main() {
 int T;
 int n, m;
 
 cin >> T;
 
 // #1 공식활용
 //    while(T--) {
 //        cin >> n >> m;
 //
 //        cout << m*(m+1)/2 - n*(n+1)/2 << endl;
 //    }
 
 // #2 부분합
 while(T--) {
 cin >> n >> m;
 
 for(int i=1; i<=10000 ; i++) {
 arr[i] = arr[i-1] + i;
 }
 cout << arr[1000] - arr[9] << endl;
 }
 
 }
 */


//int N;
//vector<int> v(N, 0);
//

//int main() {
//cin >> N;
//
//v.resize(N);
//
//for(int i=0;i<N;i++) {
//    int o;
//    cin >> o;
//    v.push_back(o);
//}
//
//vector<int>::iterator itt = find(v.begin(), v.end(), 1);
//if(itt == v.end() ){
//    // 데이터 없을 때 처리
//}
//for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//    cout << *it << ", ";
//    }
//
//    sort(v.begin(), v.end()/*, less<int>()*/);    // default는 오름차순 ->> O(n) = log(n)
//    sort(v.begin(), v.end(), greater<int>()); // 내림차순 // generic안에 클래스씀
//    for(int i=0;i<3;i++) {
//        cout << v[i] << ", ";
//    }
//
//    /////////////////////////////////////////////////
//
//    map<char, int> m;
//    m['b'] = 2;
//    m['c'] = 3;
//
//    map<char, int>::iterator it = m.find('b');  // b키에 해당하는 value 주소를 반환
//    if (it == m.end())
//    cout << "No Key!" << endl;
//
//    cout << it->first << endl;
//    cout << it->second << endl;
//}
