#include<bits/stdc++.h>
using namespace std;

/**순열 과 조합 **/
// <순열>
void P(){
    string s = "1234";
    do{
        cout << s << " ";
    }while(next_permutation(s.begin(), s.end()));
    cout << "\n\n";

    vector<int> v = {10, 5, 1, 2, 4};
    int len = v.size();
    sort(v.begin(), v.end());

    do{
        for(int ele : v) cout << ele << " ";
        cout << "\n";
    }while(next_permutation(v.begin(), v.end()));
}

void C(vector<int>& v, int N, int select_num){
    vector<bool> visited(N, true);

    for(int i =0; i < visited.size() - select_num; i++){
        visited[i] = false;
    }

    do{
        for(int idx = 0; idx < v.size(); idx++){
            if(visited[idx]){
                cout << v[idx] << " ";
            }
        }
        cout << "\n";
    }while(next_permutation(visited.begin(), visited.end()));
}

#include<bits/stdc++.h>
using namespace std;
void answer(vector<int>& v){
    vector<bool> visited(9, true);
    vector<int> temp;

    for(int i =0; i < visited.size() - 7; i++){
        visited[i] = false;
    }

    do{
        temp.clear();
        for(int idx = 0; idx < v.size(); idx++){
            if(visited[idx]){
                temp.push_back(v[idx]);
            }
        }
        
        int sum = accumulate(temp.begin(), temp.end(), 0);

        if(sum == 100){
            sort(temp.begin(), temp.end());
            for(int item : temp) cout << item << "\n";
            return;
        }
    }while(next_permutation(visited.begin(), visited.end()));
}

int main(void){
    vector<int> height;
    for(int i =0 ; i < 9; i++){
        int item;
        cin >> item;

        height.push_back(item);
    }
    answer(height);
    return 0;
}

/**ANSWER**/
int num[9], result[7];
int main(){
    for(int i =0; i < 9; i++) cin >> num[i];

    for(int a = 0; a < 8; a++){
        int total = 0;
        
        for(int b = a + 1; b < 9; b++){
            for(int i = 0, c= 0 ; i < 9; i++){
                if(i != a && i != b) result[i] = num[c];
            }
            
            for(int i =0; i < 7; i++) total += result[i];
            if(total == 100){
                for(int item : result) cout << item;
            }
        }
    }
}
