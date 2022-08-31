#include<bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;

    for(int i =0; i< 7; i++){
        int temp;
        cin >> temp;

        if(temp % 2 == 1) v.push_back(temp);
    }
    
    if(v.size() == 0){
        cout << -1;
    }
    else{
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
        cout << *min_element(v.begin(), v.end());
    }
    return 0;
}

/** ANSWER **/
#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0, temp, min = 100;

    for(int i =0; i < 7; i++){
        cin >> temp;
        if(temp & 1){
            sum += temp;

            if(min > temp){
                min = temp;
            }
        }
    }

    if(sum) cout << sum << "\n" << min;
    else cout << -1;
}