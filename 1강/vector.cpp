#include<iostream>
#include<vector>

using namespace std;

// vector 자료형은 파라미터로 넘어 올 때 복사가 되어 넘어온다 => 원본에 영향 x
void func1(vector<int> v){
    v[10] = 7;
}

// 시간 복잡도 : O(N) => 복사하는 비용
bool cmp1(vector<int> v1, vector<int> v2, int idx){
    return v1[idx] > v2[idx];
}

//참조자(&)를 이용하여 넘기면 복사하지 않으므로 시간복잡도 : O(1)이 된다.
bool cmp2(vector<int>& v1, vector<int>& v2, int idx){
    return v1[idx] > v2[idx];
}

/* 표준 입출력 */
// scanf-printf / cin-cout 성능 차이는 크게 없으나 편리성에서 cin-cout 이 더 좋음.
// 특히, "string 자료형" 을 scanf-prinf에서는 구현 할 수 없다.

int main(){
    /* vector는 복사하여 파라미터로 전달
        vector<int> v(100);
        func1(v);
        cout << v[10];
    */

    /* string자료형을 그냥 출력 할 수 없는  printf
    string s = "baaaaaaaaaaaaaaaaaaaaakingdog";
    printf("s is %s\n", s); // string 구현 안됨!!!
    

    char a[10];
    printf("input : ");
    scanf("%s", a);
    string s(a);
    printf("a is %s\n", a);
    printf("s is %s\n", s.c_str());
    */

    /* 공백(스페이스 바)입력을 받고 싶을 때
    => 원래는 공백을 입력하면 그 앞까지만 입력을 받음.
   */

    ios::sync_with_stdio(0);
    cin.tie(0);
        
    string s;
    cout << "input : ";
    cin >> s;
    cin.ignore();

    cout << "s is " << s << "\n";

    cout << "input : ";
    

    getline(cin, s);
    cout << s;

    return 0;
}
