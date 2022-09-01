#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int temp, max_num= 0, idx;
    for(int i=1; i<= 9; i++){
        cin >> temp;
        if(temp > max_num){
            max_num = temp;
            idx = i;
        } 
    }
    cout << max_num << "\n" << idx;

    return 0;
}
