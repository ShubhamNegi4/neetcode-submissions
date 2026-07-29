#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const long long inf = 0x3f3f3f3f3f3f3f;
const long long UNVISITED = -2e18; // only for dp where answer can be negative
const int N = (int)100, M = 100, K = 100;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
	
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        map<int,int>mp;
		int n = (int)arr.size();
		for(int i= 0; i<n;i++){
			mp[arr[i]]++;
		}
		vector<array<int,2>>freq;
		for(auto it: mp){
			freq.push_back({it.second, it.first});
		}
		sort(all(freq));
		reverse(all(freq));
		vector<int>ans;
		for(int i =0; i<min((int)freq.size(), k); i++){
			ans.push_back(freq[i][1]);
		}
		return ans;
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