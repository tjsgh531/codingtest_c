#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, temp;
    cin >> N;
    stack<int> s1,s2;
    stack<char> ans;

    for(int i =0; i< N; i++){
        cin >> temp;
        s1.push(temp);
    }

    int max = 0;
    while(!s1.empty()){
        temp = s1.top();
        s1.pop();

        while(max > temp){
            s2.pop();
            if(s2.empty()){
                cout << "NO";
                return 0;
            }
            ans.push('+');
            max = s2.top();
        }
        ans.push('-');
        s2.push(temp);
        max = temp;
    }
    for(int i = 0; i< s2.size(); i++) ans.push('+');
    
    while(!ans.empty()){
        char a;
        a = ans.top();
        ans.pop();

        cout << a << "\n";
    }

    return 0;
}