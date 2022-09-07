#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string a, b;
    int alpa[26];

    for(int i=0; i<N; i++){
        int cnt = 0;
        for(int j = 0; j < 26; j++) alpa[j] = 0;

        cin >> a >> b;
        for(int k : a) alpa[k-96]++;
        for(int t : b) alpa[t-96]--;
        
        for(int s : alpa){
            if(s != 0){
                cout << "Impossible" << "\n";
                break;
            } 
            else cnt++;
        }

        if(cnt == 26) cout << "Possible" << "\n";
    }

    return 0;
}