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
    int maxArea(vector<int>& arr) {
        int n = (int)arr.size();
        int l1 = 0;
        int r1 = n-1;     
        int ans =0;
        while(l1 < r1){
           ans = max(ans, (r1-l1)*min(arr[l1], arr[r1]));
           if(arr[l1] <= arr[r1])l1++;
           else r1--;
            
        }
        return ans;
            
    }
};
