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
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        int n = (int)arr.size();
        vector<string>temp = arr;
        map<string, vector<int>>mp;
        for(int i =0; i<n; i++){
            string x = arr[i];
            sort(all(x));
            arr[i] = x;
            mp[arr[i]].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto it: mp){
            vector<int>hash =it.second;
            vector<string>ans2;
            for(auto i: hash){
                ans2.push_back(temp[i]);
            }
            ans.push_back(ans2);
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