#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    int max_num, min_num;
    max_num = max(a, b);
    min_num = min(a, b);

    if(max_num == min_num || max_num - min_num == 1) cout << 0 << "\n";
    else{
        cout << max_num - min_num -1 << "\n";

        for(int i = min_num+1; i < max_num; i++){
            cout << i << " ";
        }
    } 
    return 0;
}

/**ANSWER**/

#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    if(a > b) swap(a,b);
    if(a == b || a-b == 1) cout << 0;
    else{
        cout << b-a-1 << "\n";
        for(long long i = a+1; i < b; i++) cout << i << " ";
    }
    return 0;
}