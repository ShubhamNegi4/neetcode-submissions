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
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(all(arr));
        int n = (int)arr.size();
        vector<vector<int>>ans;
        int i =0;
        while(i< n) {
            int j = i+1;
            int mx = arr[i][1];
            while(j< n and arr[j][0] <= mx) {
                mx = max(mx, arr[j][1]);
                j++;
            }
            ans.push_back({arr[i][0], mx});
            i = j;
        }  
        return ans;
    }
};