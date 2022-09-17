#include<bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    if(pos < 1000005){
        dat[pos++] = x;
    }
}

void pop(){
    if(pos > 0){
        pos--;
    }
}

/**
 * @brief 
 * STL stack!
 * push | pop | top | empty | size
 * @return int 
 */

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;
    S.push(10);
    S.push(20);
    S.push(30);
    
    cout << S.size() << '\n';

    if(S.empty()) cout << "S is empty " << "\n";
    else cout << "S is not empty" << "\n";

    S.pop();
    cout << S.top();

    S.pop();
    cout << S.top();

    return 0;
}