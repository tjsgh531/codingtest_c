#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i < N; i++){
        string s;
        cin >> s;

        list<char> pass;
        auto cursor = pass.begin();

        for(char a : s){
            if(a == '<' ){
                if(cursor != pass.begin()) cursor--;
            } 
            else if(a =='>'){
                if(cursor != pass.end()) cursor++;
            }
            else if(a == '-'){
                if(cursor != pass.begin()){
                    cursor--;
                    cursor = pass.erase(cursor);
                }
            }
            else {
                cursor = pass.insert(cursor, a);
                cursor++;
            }
        }
        
        for(char a: pass) cout << a;
        cout << "\n";
    }
    return 0;
}