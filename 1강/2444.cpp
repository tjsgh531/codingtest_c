#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=1; i <= 2*N-1; i++){
        for(int j= 0; j < abs(N-i); j++) cout << ' ';
        for(int k = 0; k < (N - abs(N-i))*2-1; k++) cout << '*';
        cout << "\n";
    }

    return 0;
}