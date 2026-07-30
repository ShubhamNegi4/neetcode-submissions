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


class Solution {
public:
    int checkcycle = 0;
    bool dfs(int i, int par, vector<vector<int>>&edges, vector<int>&vis) {
        vis[i] = 1;
        for(auto it: edges[i]) {
            if(!vis[it]){
                // parent[it] = i;
                if(dfs(it, i, edges,vis))return true;
            }
            else{
                if(it != par)return true;
            }
        }
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        // parent.resize(n+1);
        vector<vector<int>>adj(n);
        for(auto it: edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1);
        int cnt= 0;
        for(int i =0; i<n; i++) {
            if(!vis[i]) {
                cnt++;
                if(dfs(i, -1, adj, vis))return false;
            }
        }
        return cnt == 1;
    }
};
