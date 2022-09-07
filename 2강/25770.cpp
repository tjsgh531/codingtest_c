#include<bits/stdc++.h>

using namespace std;
int ans[10];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, result;
    cin >> A >> B >> C;
    result = A * B * C;
    
    int temp = 10;
    while(temp < result){
        ans[result%temp]++;
        result /= 10;
    }
    ans[result]++;

    for(int i = 0; i< 10; i++) cout << ans[i] << "\n";

    return 0;
}