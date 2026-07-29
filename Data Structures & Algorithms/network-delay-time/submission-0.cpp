#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const int inf = (int)1e9;
const long long UNVISITED = -2e18;
const int N = (int)100, M = 100, K = 100;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
	
*/

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& arr, int n, int k) {
        vector<vector<array<int,2>>>adj(n);
        int m = (int)arr.size();
        for(int i =0; i<m; i++){
            int x = arr[i][0];
            int y = arr[i][1];
            int z = arr[i][2];
            --x, --y;
            adj[x].push_back({y, z});
        }
        vector<int>dist(n, inf);
        --k;
        priority_queue<array<int,2>, vector<array<int,2>>, greater<array<int,2>>>pq;
        pq.push({0, k});
        dist[k] =0;
        while(!pq.empty()){
            auto [curr, x] = pq.top();
            pq.pop();
            if(curr > dist[x])continue;
            for(auto &[v, cost]: adj[x]){
                if(dist[x]+cost < dist[v]){
                    dist[v] = dist[x]+cost;
                    pq.push({dist[v], v});
                }
            }

        }
        int mx =0;
        for(int i= 0; i<n; i++){
            if(dist[i] == inf)return -1;
            mx = max(mx, dist[i]);
        }
        return mx;

    }
};


// int main() {
// 	vector<int>arr;
// 	int n = 7;
// 	for(int i = 0; i<n; i++){int x;
// 	cin>>x;
// 	arr.push_back(x);}
// 	cout<<maxSumTrionic(arr);
// }