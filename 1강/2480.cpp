#include<bits/stdc++.h>

using namespace std;

int main(){
    //ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b && a == c){
        cout << 10000 + a * 1000; 
    }
    else if(a == b || a == c ){
        cout << 1000 + a * 100;
    }
    else if(b == c){
        cout << 1000 + b * 100;
    }
    else{
        if(a > b && a > c) cout << a * 100;
        else if(b > a && b > c) cout << b* 100;
        else cout << c* 100;
    }
    return 0;
}

// ANSWER
/*
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && a == c) cout << 10000 + a * 1000;
    else if (a== b || a == c) cout << 1000 + a * 100;
    else if (b == c) cout << 1000 + b * 100;
    else cout << max({a, b, c}) * 100
}
*/