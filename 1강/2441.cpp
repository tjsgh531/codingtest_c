#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for(int i =0; i < N; i++){
        for(int j=0; j < i; j++) cout << ' ';
        for(int k=0; k < N-i; k++) cout << '*';
        cout << "\n";
    }

    return 0;
}