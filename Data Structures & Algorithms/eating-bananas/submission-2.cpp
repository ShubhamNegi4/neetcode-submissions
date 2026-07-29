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
	bool check(int mid, vector<int>&arr, int h){
		long long cnt= 0;
		for(int i =0; i<(int)arr.size(); i++){
			int x= ceil(arr[i]/(mid*1.0));
			cnt+= x;
			if(cnt > h)return 0;
		}
		return cnt<= h;
	}
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = (int)arr.size();
		long long low = 1;
		long long  high = accumulate(all(arr), 0ll);
		int ans =0;
		while(low <= high){
			long long mid = low+(high-low)/2;
			if(check(mid, arr, h)){
				ans = mid;
				high = mid-1;
			}
			else low = mid+1;
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