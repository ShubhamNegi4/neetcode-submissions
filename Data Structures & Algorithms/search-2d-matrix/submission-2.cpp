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
    bool searchMatrix(vector<vector<int>>& arr, int target) {
       	vector<int>column;
       	int n = (int)arr.size();
       	int m = (int)arr[0].size();
       	for(int i =0; i<n; i++){
       		column.push_back(arr[i][0]);
       	}
       	auto it = upper_bound(all(column), target);
       	--it;
        if(next(it) == column.begin())return 0;
       	int idx = it-column.begin();
       	auto it2 = upper_bound(all(arr[idx]), target);
       	it2--;
        if(next(it2) == arr[idx].begin())return 0;
       	if((*it2) == target)return 1;
       	else return 0;
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