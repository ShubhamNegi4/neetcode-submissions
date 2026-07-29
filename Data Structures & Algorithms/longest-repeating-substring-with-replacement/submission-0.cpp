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
    int characterReplacement(string s, int k) {
        int n = (int)s.size();
        int r =0;
        int l =0;
        map<char,int>mp;
        int ans =0;
        int mxfreq =0;
        while(l < n) {
            mp[s[l]]++;
            mxfreq = max(mxfreq, mp[s[l]]);
            while((l-r+1)-mxfreq > k) {
                mp[s[r]]--;
                r++;
            }
            ans = max(ans, (l-r+1));
            l++;
        }
        return ans;
    }
};
