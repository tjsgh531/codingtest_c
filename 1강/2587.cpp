#include<bits/stdc++.h>
using namespace std;

int main(void){
    //ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    for(int i =0; i< 5; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int avg = accumulate(v.begin(), v.end(), 0) / 5;
    sort(v.begin(), v.end());
    int mid = v[2];

    cout << avg << "\n" << mid;
    return 0;
}

/*ANSWER*/
#include<bits/stdc++.h>
using namespace std;

int num[5], total =0;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 5; i ++){
        cin >> num[i];
        total += num[i];
    }

    cout << total /5 << "\n";
    sort(num, num+5);
    cout << num[2];

    return 0;
}