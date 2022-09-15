#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> editor; 
    string init;
    cin >> init;

    for(char i : init) editor.push_back(i);

    int M;
    cin >> M;
    auto cursor = editor.end();

    char order, temp;
    for(int i=0; i<M; i++){
        cin >> order;
        if(order == 'L' && cursor != editor.begin()){
            cursor--;
        } 
        else if(order == 'D' && cursor != editor.end()){
            cursor++;
        }
        else if(order=='B' && cursor != editor.begin()){
            cursor--;
            cursor = editor.erase(cursor);
        }
        else if(order=='P'){
            cin >> temp;
            editor.insert(cursor, temp);
        }
    }

    for(auto c : editor) cout << c;

    return 0;
}

/**!!!!! erase할때 반환값을 cursor에 넣어주자!!!!!**/

/**ANSWER**/
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;
    list<char> L;
    for(auto c : init) L.push_back(c);
    auto cursor = L.begin();
    int q;
    cin >> q;
    while(q--){
        char op;
        cin >> op;
        if(op == 'P'){
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if(op == 'L'){
            if(cursor != L.begin()) cursor--;
        }
        else if(op == 'D'){
            if(cursor != L.end()) cursor++;
        }
        else{
            if(cursor != L.begin()){
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
}