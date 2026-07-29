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
    string minWindow(string s, string t) {
        int n = (int)s.size();
        unordered_map<char, int>countt, windows;
        for(auto it: t){
            countt[it]++;
        }
        int have =0;
        int idx1= 0;
        int idx2 =0;
        int res = inf;
        int need = (int)countt.size();
        if(need == 0)return "";
        int l =0;
        int r =0;
        while(r < n) {
            windows[s[r]]++;
            if(windows[s[r]] == countt[s[r]])have++;
            while(have == need) {
                if((r-l+1) < res) {
                    res = r-l+1;
                    idx1 = l;
                    idx2 = r;
                }
                windows[s[l]]--;
                if(windows[s[l]] < countt[s[l]]){
                    have--;
                }
                l++;
            }
            r++;
        }
        if(res == inf)return "";
        return s.substr(idx1, res);
    }
};
