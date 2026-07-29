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
    vector<int> twoSum(vector<int>& arr, int tar) {
        int n = (int)arr.size();
        int l = 0, r=n-1;
        while(l < r){
        	int x= arr[l]+arr[r];
        	if(x < tar)l++;
        	else if(x > tar)r--;
        	else{
        		return {l+1, r+1};
        	}
        }
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