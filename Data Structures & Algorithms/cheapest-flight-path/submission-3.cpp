#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

const int inf = 0x3f3f3f3f;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<array<int,2>>> adj(n);
        for(auto& f : flights) {
            adj[f[0]].push_back({f[1], f[2]});
        }
        
        vector<vector<int>> dis(n, vector<int>(k + 2, inf));
        dis[src][0] = 0;
        
        priority_queue<array<int,3>, vector<array<int,3>>, greater<>> pq;
        pq.push({0, src, 0});
        
        while(!pq.empty()) {
            auto [cost, u, stops] = pq.top();
            pq.pop();
            
            if(u == dst) return cost;
            if(stops > k) continue;
            if(cost > dis[u][stops]) continue;
            
            for(auto [v, w] : adj[u]) {
                int newCost = cost + w;
                if(newCost < dis[v][stops + 1]) {
                    dis[v][stops + 1] = newCost;
                    pq.push({newCost, v, stops + 1});
                }
            }
        }
        
        return -1;
    }
};