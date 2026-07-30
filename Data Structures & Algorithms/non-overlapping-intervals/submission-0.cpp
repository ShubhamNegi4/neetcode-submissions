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
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        int n = (int)arr.size();
        sort(all(arr));
        int prev =arr[0][1];
        int ans =0;
        for(int i= 1; i<n; i++) {
            int start = arr[i][0];
            int end = arr[i][1];
            if(start >= prev) {
                prev = end;
            }
            else{
                ans++;
                prev = min(prev, end);
            }

        }
        return ans;
    }
};
