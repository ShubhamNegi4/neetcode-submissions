    #include <bits/stdc++.h>
    using namespace std;
    #define all(x) (x).begin(), (x).end()
    // #define int long long int
    // #define endl '\n'
    const int inf = 0x3f3f3f;
    const long long UNVISITED = -2e18; // only for dp where answer can be negative
    const int N = (int)50;
    const int mod = (int)1e9+7;
    /*
				ok so i misunderstood this problem
				i just have to find the max from 0,0 to n-1, m-1 to be minimum
				so for all the paths, the max should be the minimum
    */
    // int dp[N+1][N+1];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
class Solution {
public:
	int f(int i, int j, int n, int m , int curr, vector<vector<int>>&arr, vector<vector<int>>&vis){
		if(i>= n or j>= m or i< 0 or j < 0 or vis[i][j])return inf;
		if(i == n-1 and j == m-1)return max(curr, arr[i][j]);
		vis[i][j] = 1;
		curr = max(arr[i][j], curr);
		int take = inf;
		int best1 = inf;
		int best2= inf;
		for(int k =0; k<4; k++){
			int nx = i+dx[k];
			int ny = j+dy[k];
			best1 = f(nx, ny, n, m, curr, arr, vis);
			take = min(take, best1);
		}
		vis[i][j] =0;
		return take;

	}
    int swimInWater(vector<vector<int>>& grid) {
        int n = (int)grid.size();
		int m = (int)grid[0].size();
		// memset(dp, -1, sizeof(dp));
		vector<vector<int>>vis(n+1, vector<int>(m+1, 0));
		return f(0, 0, n, m, grid[0][0],grid, vis);
    }
};



    // int main() {
    //     vector<string>words;
    // 	cout<<search(arr, 1);
    // }

