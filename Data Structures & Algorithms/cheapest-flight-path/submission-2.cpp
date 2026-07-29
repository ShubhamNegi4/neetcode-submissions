#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const int inf = 0x3f3f3f;
const long long UNVISITED = -2e18;
const int N = (int)100, M = 100, K = 100;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
    
*/


class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& graph, int src, int dst, int k) {
        int m = (int)graph.size();
        vector<vector<array<int,2>>>adj(n);
        for(int i=0; i<m; i++){
            int x = graph[i][0];
            int y = graph[i][1];
            int w = graph[i][2];
            adj[x].push_back({y,w});
        }
        vector<int>dis(n+1,inf);
        dis[src] = 0;
        priority_queue<array<int,3>, vector<array<int,3>>, greater<array<int,3>>>pq;
        //hop//cost//source
        pq.push({0, 0, src});
        int ans = inf;
        while(!pq.empty()){
            auto [hop, curr, x] = pq.top();
            pq.pop();
            if(x == dst and hop-1 <= k){
                ans = min(ans, curr);
            }
            for(auto &[v, cost]: adj[x]){
                if(curr+cost < dis[v]){
                    dis[v] = curr+cost;
                    pq.push({hop+1, dis[v], v});
                }
            }

        }
        if(ans == inf)return -1;
        return ans;

    }
};







// int main() {
//  vector<int>arr;
//  int n = 7;
//  for(int i = 0; i<n; i++){int x;
//  cin>>x;
//  arr.push_back(x);}
//  cout<<maxSumTrionic(arr);
// }