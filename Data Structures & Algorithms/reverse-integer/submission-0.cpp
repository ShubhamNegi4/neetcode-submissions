#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const long long inf = 0x3f3f3f3f3f3f3f;
const long long UNVISITED = -2e18;
const int N = (int)100, M = 100, K = 100;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
	
*/


class Solution {
public:
    int reverse(int x) {
        // if(x < INT_MIN or x > INT_MAX)return 0;
        if(1){
            string temp = to_string(x);
            string hash;
            for(int i = (int)temp.size()-1; i>= 0; i--){
                hash+= temp[i];
            }
            long long num= stoll(hash);
            if(x < 0)num*=-1;
            if(num < INT_MIN or num > INT_MAX)return 0;
            return (int)num;

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