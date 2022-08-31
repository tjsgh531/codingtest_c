#include<bits/stdc++.h>

using namespace std;

int main(void){
    //ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i =0; i < 3; i++){
        vector<int> temp;
        for(int j=0; j < 4; j++){
            int item;
            cin >> item;
            temp.push_back(item);
        }
        int cnt = count(temp.begin(), temp.end(), 0);

        switch (cnt){
            case 0:
                cout << "E" << "\n";
                break;
            case 1:
                cout << "A"<< "\n";
                break;
            case 2:
                cout << "B"<< "\n";
                break;
            case 3:
                cout << "C"<< "\n";
                break;
            case 4:
                cout << "D"<< "\n";
                break;
        }
    }
    return 0;
}

/**ANSWER**/
/*
int result, input;
string res = "DCBAE";

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int r=0; r < 3; r++){
        result = 0;
        for(int c = 0; c< 4; c++){
            cin >> input;
            result += input;
        }
        cout << res[result] << "\n";
    }
}
*/