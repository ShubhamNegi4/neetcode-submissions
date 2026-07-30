#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
const long long inflong = 0x3f3f3f3f3f3f3f;
const int inf = 0x3f3f3f3f;

static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

/*
 
 
*/
const int N  = (int)1000;
int dp[N+1];
class Solution {
public:
    bool f(int i, int n, vector<int>&nums ) {
        if(i>= n)return 0;
        if(i == n-1)return 1;
        if(dp[i] != -1)return dp[i];
        int take = 0;
        for(int j = 1; j<= nums[i]; j++) {
            take  |= f(i+j, n, nums);
        }
        return dp[i]= take;
    }
    bool canJump(vector<int>& nums) {
        int n = (int)nums.size();
        memset(dp, -1, sizeof(dp));
        return f(0, n, nums);
    }
};
