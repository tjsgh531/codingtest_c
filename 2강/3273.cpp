#include<bits/stdc++.h>
using namespace std;

int arr[1000001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, temp, range, ans = 0;
    cin >> n;
    
    for(int i =0; i< n; i++){
        cin >> temp;
        arr[temp]++;
    }

    cin >> x;
    if(x%2 == 0) range = x/2;
    else range = x/2 +1;

    for(int i= 1; i < range; i++){
        if(x-i > 1000000) continue;
        if(arr[i] && arr[x-i]) ans++;
    }

    cout << ans;
    return 0;
}