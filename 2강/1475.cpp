
#include<bits/stdc++.h>
using namespace std;

int num[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while(N > 0){
        num[N % 10]++;
        N /= 10;
    }
    num[6] += num[9];
    num[9] = 0;
    if(num[6] % 2 == 0) num[6] /= 2;
    else num[6] = num[6] / 2 + 1;

    cout << *max_element(num, num+10);
    return 0;
}