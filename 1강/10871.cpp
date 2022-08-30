#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, X;
    cin >> N >> X;

    vector<int> v(N);

    for(int i =0; i< N; i++){
        cin >> v[i];
    }

    for(int i = 0 ; i < N; i++){
        if(v[i] < X){
            cout << v[i] << ' ';
        }
    }
}

/** 깔끔 코드 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int* a = new int[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    for(int i =0; i< n; i++){
        if(a[i] < x) cout << a[i] << ' ';
    }
    delete[] a;
}
**/

/** 코딩 테스트용 코드  **/
/*
#include<bits/stdc++.h>
using namespace std;
int n, x, a[10005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i< n; i++)
        if(a[i] < x) cout << a[i] << ' ';
}
*/
