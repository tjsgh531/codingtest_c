#include<iostream>
#include<cmath>

using namespace std;

int func1(int N){
    int ans = 0;

    for(int i = 1; i <= N; i++){
        if(i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }

    return ans;
}

int func2(int arr[], int N){
    for(int i =0; i < N-1; i++){
        for(int j =i+1; j < N; j++){
            if(arr[i] + arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}

int func3(int N){
    double a = sqrt(N);
    if (a == int(a)){
        return 1;
    }
    return 0;
}

int func4(int N){
    int cnt = 0;
    while(N/2 > 0){
        cnt ++;
        N /= 2; 
    }

    return pow(2, cnt);
}

int main(){
    /**문제1
    cout << func1(16) << "\n" << func1(34567) << "\n" << func1(27639);
    **/

    /**문제2
    int test1[] = {1,52,48}, test2[] = {50,42}, test3[] = {4,13,63,87};
    cout << func2(  test1, 3) << "\n" << func2(test2, 2) << "\n" << func2( test3, 4) << "\n";
    **/

    /** 문제3
    cout << func3(9) << "\n" << func3(693953651) << "\n" << func3(756580036) << "\n";
    **/

    cout << func4(5) << "\n" << func4(97615282) << "\n" << func4(1024) << "\n";
    return 0;
}
