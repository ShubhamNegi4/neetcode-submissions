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
    int maxProfit(vector<int>& prices) {
        int n = (int)prices.size();
        int mn = prices[0];
        int ans = 0;
        for(auto it: prices) {
            ans = max(ans, it-mn);
            mn = min(mn, it);
        }
        return ans;
    }
};
