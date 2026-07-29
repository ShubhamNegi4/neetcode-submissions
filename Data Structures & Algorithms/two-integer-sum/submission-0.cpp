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
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = (int)arr.size();
        map<int,int>mp;
        for(int i= 0; i<n; i++){
            int rem = target-arr[i];
            if(mp.find(rem)!= mp.end()){
                return {mp[rem], i};
            }
            mp[arr[i]] = i;
        }
        return {-1, -1};
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