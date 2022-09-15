#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, k, num = 0;
    cin >> N >> k;
    list<int> L;
    auto it;
    vector<int> out;

    for (int i = 1; i <= N; i++) {
        L.push_back(i);
    }

    it = L.begin();
    for (int j = 0; j < N; j++) {

        for (int i = 0; i < k - 1; i++) {
            if (it == L.end()) it = L.begin();
            it++;
        }

        if (it != L.end()) {
            out.push_back(*it);
            it = L.erase(it);
        }
        else {
            it = L.begin();
            out.push_back(*it);
            it = L.erase(it);
        }
    }
    cout << "<";
    for (int i = 0; i < out.size(); i++) {
        if (i == out.size() - 1) cout << out[i] << ">";
        else cout << out[i] << ", ";
    }
}

----------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, k, num=0;
    cin >> N >> k;
    list<int> L;
    list<int>::iterator it;
    vector<int> out;

    for(int i=1; i<=N; i++){
        L.push_back(i);
    }
    it = L.begin();
    for(int j=0; j<N; j++){

        for(int i=0; i<k-1; i++){
            if(it == L.end()) it=L.begin();
            it++;
        }

        
        if(it!=L.end()){
            out.push_back(*it);
            it = L.erase(it);
        }
        else{
            it++;
            L.erase(it);
            out.push_back(*it);
            it = L.begin();
        }

    }
    cout << "<" ;
    for(int i=0; i< out.size();i++){
        if(i==out.size()-1) cout << out[i] << ">";
        else cout << out[i] << ", ";
    }
}