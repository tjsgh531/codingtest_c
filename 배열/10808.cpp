#include<bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int ans[26];
    for(int i = 0; i < 26; i++) ans[i] = 0;

    for(char i : s) ans[int(i) - 97]++;
    
    for(int i : ans) cout << i << ' ';
    
    return 0;
}

//전역에 선언하면 알아서 초기화 된다.
/*
//Answer
#include<bits/stdc++.h>
using namespace std;

int freq[26];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    for(auto c : s) freq[c - 'a']++;
    for(int i = 0; i< 26; i++) cout << freq[i] << ' ';

    return 0;
}

17:16
*/