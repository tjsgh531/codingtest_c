
연결 리스트의 성질
1. k번째 원소를 확인/변경 하기 위해 O(k)가 필요함
2. 임의의 위치에 원소를 추가 OR 임의의 위치에 원소를 제거는 O(1)
3. 원소들이 메모리 상에 연속해 있지 않다 => Cache hit rate가 낮지만 할당이 다소 쉬움

연결 리스트 종류
1. 단일 연결 리스트
2. 이중 연결 리스트
3. 원형 연결 리스트

* STL에 연결리스트가 있는데 이 컨테이너의 이름은 list이고 이중 연결 리스트 임

배열 vs 연결리스트 
공통점 : 선형 자료구조 이다. => 원소들 간의 선후 관계가 있다 (ex. 첫 번째 원소, 두 번째 원소 ...)

* 비선형 자료구조 : 원소들 간의 선후 관계가 없다. (ex. 트리 그래프 해쉬 등)

                                    배열    연결리스트
k번째 원소의 접근                  O(1)    O(k)
임의의 위치에 원소 추가/제거        O(N)    O(1)
메모리상의 배치                    연속    불연속
추가적으로 필요한 공간(overhead)    -      O(N)

* 임의의 위치에 원소를 추가 삭제 하는 작업을 많이 하는 경우에만 연결리스트 그 외는 거의 배열

#include<bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num){
    int cur = nxt[0];
    while(nxt[cur] != addr){
        cur = nxt[cur];    
    }
    dat[addr] = num;
    nxt[addr] = nxt[cur];
    pre[addr] = cur;

    nxt[cur] = addr;
    pre[nxt[cur]] = addr;
}

/**ANSWER**/
void insert(int addr, int num){
    dat[unused] = num;
    pre[unused]= addr;
    nxt[unused] = nxt[addr];

    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    pre[addr] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}
#include<list>
using namespace std;

int main(void){
    //push_front() | push_back() | pop_front() | pop_back() | insert() | erase() 
    list<int> L = {1, 2};
    
}