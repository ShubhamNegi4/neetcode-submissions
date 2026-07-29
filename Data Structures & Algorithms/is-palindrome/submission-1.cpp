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
    bool isPalindrome(string s) {
        string x= "";
        for(auto &it: s){
        	// it = tolower(it);
        	if((it >= 'a' and it <= 'z') or (it >= 'A' and it <= 'Z') or (it >= '0' and it <= '9'))x+= tolower(it);
        }
        string temp = x;
        reverse(all(temp));
        return temp == x;
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