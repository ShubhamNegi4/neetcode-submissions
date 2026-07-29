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
    bool isValid(string s) {
        stack <char>st;
        int n = (int)s.size();
        for(int i= 0; i<n; i++) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')st.push(s[i]);
            else{
                if(st.empty())return 0;
                char x = st.top();
                if(st.top() == '{' and s[i] != '}')return 0;
                if(st.top() == '[' and s[i] != ']')return 0;
                if(st.top() == '(' and s[i] != ')')return 0;
                st.pop();
            }
        }
        if(!st.empty())return 0;
        return 1;
    }
};
