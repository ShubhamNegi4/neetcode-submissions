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
    bool isValidSudoku(vector<vector<char>>& arr) {
        int n = (int)arr.size();
        for(int i =0; i<n; i++){
        	set<int>check;
        	set<int>check2;
        	for(int j =0; j<n; j++){
        		if(arr[i][j] == '.')continue;
        		if(check.find(arr[i][j]) != check.end())return 0;
        		check.insert(arr[i][j]);
        	}
        	for(int j =0; j<n; j++){
        		if(arr[j][i] == '.')continue;
        		if(check2.find(arr[j][i]) != check2.end())return 0;
        		check2.insert(arr[j][i]);
        	}
        }
        for(int i =0; i<n; i+=3){
        	for(int j =0; j<n; j+=3){
        		set<char>st;
        		for(int k1 = 0; k1< 3; k1++){
        			for(int k2 = 0; k2< 3; k2++){
        				if(arr[i+k1][j+k2] == '.')continue;
        				else{
        					if(st.find(arr[i+k1][j+k2]) != st.end())return 0;
        					st.insert(arr[i+k1][j+k2]);
        				}
        			}
        		}
        	}
        }
        return 1;
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