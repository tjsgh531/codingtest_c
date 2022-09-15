#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,K;
    cin >> N >> K;

    list<int> L ;
    for(int i=1; i <= N; i++) L.push_back(i);

    auto cursor = L.begin();

    cout << '<';

    for(int k=0; k < N; k++){
        for(int i=0; i<K-1; i++){
            if(cursor == L.end()) cursor = L.begin();
            cursor++;
        } 
        
        if(cursor == L.end()){
            cursor = L.begin();

            if(k == N-1) cout << *cursor;
            else cout << *cursor << ", ";

            cursor = L.erase(cursor);
        }
        else{
            if(k == N-1) cout << *cursor;
            else cout << *cursor << ", ";
            cursor = L.erase(cursor);        
        }
        
    }
    cout << '>';
    return 0;
}