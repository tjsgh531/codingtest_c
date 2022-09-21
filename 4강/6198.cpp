#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, height, result =0;
    cin >> N;

    stack<int> s;
    stack<pair<int, int>> ans;
    ans.push({1000000001, 0});

    for(int i=0; i< N; i++){
        cin >> height;
        s.push(height);
    }

    while(!s.empty()){
        height = s.top();
        s.pop();

        int sum =0;
        while(ans.top().X < height){
            sum += ans.top().Y +1;
            ans.pop();
        }
        ans.push({height, sum});
    }

    while(!ans.empty()){
        result += ans.top().Y;
        ans.pop();
    }
    cout << result;
    return 0;
}