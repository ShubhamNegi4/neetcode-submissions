#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const long long inf = 0x3f3f3f3f3f3f3f;
const long long UNVISITED = -2e18; // only for dp where answer can be negative
const int N = (int)1000;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
	
*/
int dp[N+1][N+1];
class Solution {
public:
	int f(int i, int n, int prev,  vector<int>&arr){
		if(i >= n)return 0;
		if(dp[i][prev+1] != -1)return dp[i][prev+1];
		int nottake= f(i+1, n, prev, arr);
		int take= 0;
		if(prev == -1 or arr[i] == arr[prev]+1){
			take = 1+f(i+1, n, i, arr);
		}
		return dp[i][prev+1] = max(take, nottake);
	}
    int longestConsecutive(vector<int>& arr) {
    	int n = (int)arr.size();
        // memset(dp,-1, sizeof(dp));
        // return f(0, n, -1, arr);
        sort(all(arr));
        arr.erase(unique(all(arr)), arr.end());
        int cnt =1;
        if(n == 0)return 0;
        for(auto it: arr)cout<<it<<" ";
        cout<<endl;
        int mx = 1;
        for(int i= 0; i+1<(int)arr.size(); i++){
        	if(arr[i]+1 == arr[i+1])cnt++;
            else cnt = 1;
            mx = max(mx, cnt);
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