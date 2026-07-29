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
vector<string>ans;
class Solution {
public:
	void dfs(string start, map<string,vector<string>>&mp){
		// so i will doing something like a topo sort here
		while(!mp[start].empty()){
			string v = mp[start][0];
			mp[start].erase(mp[start].begin());
			dfs(v, mp);
		}
		ans.push_back(start);

	}
    vector<string> findItinerary(vector<vector<string>>& tickets) {
		int n = (int)tickets.size();

       	map<string, vector<string>>mp;
		for(int i= 0; i<n; i++) {
			string x = tickets[i][0];
			string y = tickets[i][1];
			mp[x].push_back(y);
		}
		for(auto &[x, y]: mp){
			sort(all(y));
		}
        ans.clear();
		dfs("JFK", mp);
		reverse(all(ans));
		return ans;
    }
};




    // int main() {
    //     vector<string>words;
    // 	cout<<search(arr, 1);
    // }

