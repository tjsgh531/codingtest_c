#include<bits/stdc++.h>
using namespace std;

int alpa[26];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    string a, b;

    cin >> a >> b;
    for(int k : a) alpa[k-97]++;
    for(int t : b) alpa[t-97]--;

    for(int s : alpa) ans += abs(s);
    cout << ans;

    return 0;
}