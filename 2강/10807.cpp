#include<bits/stdc++.h>
using namespace std;

int arr[201];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, temp, v;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> temp;

        arr[temp+100]++;
    }

    cin >> v;
    cout << arr[v+100];
    return 0;
}