#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, temp;
    vector<int> v;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }

    int m_price =0, y_price= 0;
    for(int i= 0; i < N; i++){
        y_price += 10;
        m_price += 15;

        y_price += (v[i] /30) * 10;
        m_price += (v[i] /60) * 15;
    }
    if(m_price == y_price) cout << "Y " << "M " << y_price;
    else if(m_price > y_price) cout << "Y " << y_price;
    else cout << "M " << m_price;

    return 0;
}

/**ANSWER**/
