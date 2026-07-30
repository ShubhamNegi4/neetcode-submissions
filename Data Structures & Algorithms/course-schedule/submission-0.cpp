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
    vector<int>act;
    int f(int  u, vector<vector<int>>&adj, vector<int>&vis) {
        vis[u] = 1;
        act[u] = 1;
        for(auto v: adj[u]) {
            if(!vis[v]){
                if(f(v, adj, vis))return 1;
            }
            if(act[v])return 1;
        }
        act[u] = 0;
        return 0;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {

        vector<vector<int>>adj(n);
        for(auto it: prerequisites) {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n);
        act.resize(n, 0);
        for(int i =0; i<n; i++){
            if(!vis[i]) {
                int x= f(i, adj,vis);
                if(x == 1)return 0;
            }
        }
        return 1;
    }
};
