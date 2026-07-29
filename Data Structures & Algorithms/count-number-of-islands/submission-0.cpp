#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
const long long inflong = 0x3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;

static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

/*
 
 
*/

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

class Solution {
public:
    void f(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<int>>&vis) {
        vis[i][j] = 1;
        for(int k =0; k<4; k++) {
            int nx = i+dx[k];
            int ny = j+ dy[k];
            if(nx < 0 or ny < 0 or nx >= n or ny >= m or vis[nx][ny] == 1 or grid[nx][ny] == '0')continue;
            f(nx, ny, n, m, grid, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = (int)grid.size();
        int m = (int)grid[0].size();
        vector<vector<int>>vis(n+1, vector<int>(m+1));
        int cnt =0;
        for(int i= 0; i<n; i++) {
            for(int j =0; j<m; j++) {
                if(!vis[i][j] and grid[i][j] != '0') {
                    f(i, j, n, m, grid, vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
