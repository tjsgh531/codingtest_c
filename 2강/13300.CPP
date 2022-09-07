#include<bits/stdc++.h>
using namespace std;

int boy[7];
int girl[7];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, S, Y, ans = 0;
    cin >> N >> K;
    for(int i = 0; i<N ; i++){
        cin >> S >> Y;
        if(S == 0) girl[Y]++;
        else boy[Y]++;
    }

    for(int i: boy){
        if(i%K == 0) ans += i/K;
        else ans+= i/K+1;
    }
    for(int i: girl){
        if(i%K == 0) ans += i/K;
        else ans+= i/K+1;
    }
    cout << ans;
    
    return 0;
}