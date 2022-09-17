#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int N, temp;
    string o;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> o;

        if(o == "push"){
            cin >> temp;
            s.push(temp);
        }
        else if(o == "top"){
            if(s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
        else if(o == "size") cout << s.size() << "\n";
        else if(o == "pop"){
            if(s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(o == "empty"){
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }

    return 0;
}