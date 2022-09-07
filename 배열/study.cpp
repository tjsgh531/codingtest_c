#include<bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
    for(int i = len; i > idx; i--) arr[i] = arr[i-1];
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len){
    for(int i = idx+1; i < len; i++){
        arr[i-1] = arr[i];
    }
    len --;
}

void printArr(int arr[], int& len){
    for(int i =0; i < len; i++) cout << arr[i] << ' ';
    cout << "\n\n";
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}

// 배열의 성질
/*
1. O(1)에 k번째 원소를 확인/ 변경 가능
2. 추가적으로 소모되는 메모리양(overhead)가 거의 없음
3. Cache hit rate가 높음
4. 메모리 상에 연속한 구간을 잡아야 해서 할당에 제약이 걸림
*/

// 배열 초기화 코드
void initArr(){
    int a[21];
    int b[21][21];

    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    //memset을 이용할 경우 이차원 배열이나 여러 문제 발생가능(비추)

    for(int i = 0; i < 21; i++) a[i] = 0;
    for(int i = 0; i < 21; i++)
        for(int j = 0; j < 21; j++) b[i][j] = 0;

    //for을 사용하는 경우 코드는 길지만 안정적이서 좋아요(권장)

    fill(a, a+21, 0);
    for(int i = 0; i < 21; i++) fill(b[i], b[i]+21, 0)

    //fill이란 함수를 이용해서도 할 수 있다.(강력 추천)
}

// 짱짱 vector
// push_back | pop_back | insert | erase | clear | 
int main(void){
    vector<int> v1(3, 5); // {5, 5, 5}
    
    cout << v1.size() << "\n";
    v1.push_back(7);

    vector<int> v2(2); //{2, 2}
    v2.insert(v2.begin()+1, 3); //{0, 3, 0}

    vector<int> v3 = {1, 2, 3, 4};
    v3.erase(v3.begin()+2);

    vector<int> v4;
    v4 = v3;
    cout << v4[0] << v4[1] << v4[2] << '\n';

    v4.pop_back();
    v4.clear();

    //forEach 기능
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    for(int e : v1) cout << e << " ";
    
    for(int i =0; i < v1.size(); i++) cout << v1[i] << ' ';

    // WRONG!!!! 
    // v1이 빈 벡터라면 v1.size() 값은 0이되고 여기서 -1을 하면 42... 값을 반환 그래서 for문 실행 하게 됨
    for(int i =0; i <= v1.size()-1; i++) cout << v1[i] << ' ';

    return 0;
}