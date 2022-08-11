#include<bits/stdc++.h> // 이것도 뭐지??
using namespace std;

#define X first
#define Y second

int board[502][502] = {...};
bool vis[502][502];

int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
    ios::sync_with_stdio(0); //이게 뭐냐??
    cin.tie(0); // 얜 또 뭐야 ???
    queue<pair<int, int>> Q; //ㅈ됐다 아는 줄이 없다.
    vis[0][0] = 1;
    Q.push({0,0});

    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop(); // pop()은 반환을 안해줘서 front() 쓰고나서 pop하는 거구나
        cout << '(' << cur.X << ", " << cur.Y << ") -> ";
        
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx <0 || nx >= n || ny < 0 || ny >= m) continue;

            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }
}
