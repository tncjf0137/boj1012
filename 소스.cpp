#include <bits/stdc++.h>
using namespace std;
#define X first 
#define Y second
int n, m,t,k;
int board[52][52];
int vis[52][52];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int x, y;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	 cin >> t;
	 for (int i = 0; i < t; i++) {

		 for (int k = 0; k < 52; k++) {
			 fill(board[i], board[i] + 52, 0);
			 fill(vis[i], vis[i] + 52, 0);
		 }

		 queue<pair<int, int>>Q;
		 cin >> n >> m >> k;
		 for (int i = 0; i < k; i++)
		 {
			 cin >> x >> y;
			 board[x][y] = 1;

		}
		 int num=0;
		 for (int i = 0; i < n; i++) {
			 for (int j = 0; j < m; j++) {
				 if (vis[i][j] == 1 or board[i][j]!=1)continue;
				 num++;
				 vis[i][j] = 1;
				 Q.push({ i,j });


				 while (!Q.empty()) {
					 auto cur = Q.front(); Q.pop();
					 for (int dir = 0; dir < 4; dir++) {
						 int nx = cur.X + dx[dir];
						 int ny = cur.Y + dy[dir];
						 if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
						 if (vis[nx][ny] || board[nx][ny] != 1)continue;
						 vis[nx][ny] = 1;
						 Q.push({ nx,ny });
					 } }



			 } }
		 cout << num << '\n';















































	 }









}