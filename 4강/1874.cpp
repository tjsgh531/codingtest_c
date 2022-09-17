#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp, s1_item, s2_item, max = 0;
    cin >> n;
    stack<int> s1, s2;
    stack<char> result;

    for(int i= 0; i < n; i++){
        cin >> temp;
        s1.push(temp);
    }

    while(!s1.empty()){
        temp = s1.top();
        s1.pop();

        if(temp > max){
            max = temp;
            s2.push(temp);
            result.push('-');
        }
        else{
            while(temp < max){
                if(s2.empty()){
                    cout << "NO";
                    return 0;
                }
                else{
                    s2_item = s2.top();
                    s2.pop();
                    result.push('+');

                    max = s2.top();

                    if(s2_item != n){
                        cout << "NO";
                        return 0;
                    }
                    n--;
                }
            }

            max = temp;
            s2.push(temp);
            result.push('-');
        }
    }

    while(!s2.empty()){
        s2_item = s2.top();
        s2.pop();
        result.push('+');

        if(s2_item != n){
            cout << "NO";
            return 0;
        }
        n--;
    }

    while(!result.empty()){
        char temp2;
        temp2 = result.top();
        result.pop();

        cout << temp2 << "\n";
    }

    return 0;
}