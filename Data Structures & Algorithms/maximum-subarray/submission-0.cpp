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


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx =-(int)1e9;
        int curr =0;
        int n = (int)nums.size();
        for(int i = 0; i<n; i++) {
            curr+= nums[i];
            mx= max(mx, curr);
            if(curr < 0)curr = 0;
        }
        return mx;
    }
};
