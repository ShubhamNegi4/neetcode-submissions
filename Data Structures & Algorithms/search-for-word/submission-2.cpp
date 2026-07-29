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
int dx[] = {-1, 0, 1,0};
int dy[] = {0, 1, 0, -1};

class Solution {
public:
    bool f(int i, int j, int k, int n, int m, int len, vector<vector<char>>&arr, string word, vector<vector<int>>&vis) {
        if(k == len-1)return 1;
        if(i>= n or j>= m)return 0;
        int check =0;
        vis[i][j] = 1;
        for(int p =0; p<4; p++) {
            int nx = i+dx[p];
            int ny = j+dy[p];
            if(nx < 0 or ny < 0 or nx >= n or ny >=m or vis[nx][ny] == 1)continue;
            if(arr[nx][ny] == word[k+1])check|= f(nx, ny, k+1, n, m, len, arr, word, vis);
        }
        vis[i][j] = 0;
        return check;
    }
    bool exist(vector<vector<char>>& arr, string word) {
        int n = (int)arr.size();
        int m = (int)arr[0].size();
        int len = (int)word.size();
        // vector<vector<int>>vis(n+1, vector<int>(m));
        // int check =0;
        for(int i =0; i<n; i++) {
            for(int j =0; j<m; j++) {
                if(arr[i][j] == word[0]) {
                    vector<vector<int>>vis(n+1, vector<int>(m+1));
                    if(f(i, j, 0, n, m, len,arr, word, vis))return 1;
                }
            }
        }
        return 0;
    }
};
