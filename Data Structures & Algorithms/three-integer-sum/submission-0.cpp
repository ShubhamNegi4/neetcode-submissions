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

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = (int)arr.size();
        sort(all(arr));
        if(n < 3)return {{-1, -1}};
        vector<vector<int>>ans;
        for(int i =0; i+2<n; i++){
        	int j = i+1;
        	int k = n-1;
        	while(j< k){
        		int sum = arr[i]+arr[j]+arr[k];
        		if(sum == 0){
        			ans.push_back({arr[i], arr[j], arr[k]});
        			j++;
        			k--;
        		}
        		else if(sum < 0)j++;
        		else if(sum > 0 )k--;
        	}
        }
        sort(all(ans));
        ans.erase(unique(all(ans)), ans.end());
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