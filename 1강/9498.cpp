// <bits/stdc++.h>라는 헤더파일에는 우리가 자주 쓸만한 헤더파일들을 몽땅 다 include 해놓은 헤더파일
#include<bits/stdc++.h>

using namespace std;

int main(void){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int a;
    cin >> a;

    if(a >= 90) cout << "A";
    else if(a >= 80) cout << "B";
    else if(a >= 70) cout << "C";
    else if(a >= 60){
        cout << "D";
    }
    else{
        cout << "F";
    }

    return 0;
}