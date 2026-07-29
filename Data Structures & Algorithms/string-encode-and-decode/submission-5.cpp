class Solution {
public:

    string encode(vector<string>& strs) {
        string x = "";
        for(auto it: strs) {
            x+= it;
            x+= "(int)1e9";
        }
        return x;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i =0; 
        int n =(int)s.size();
        while(i < n) {
            string hash = "";
            int j = i;
            while(j < n) {
                if(s[j] == '('){
                    if(j+7 < n and s[j] == '(' and s.substr(j,8) == "(int)1e9"){
                        break;
                    }
                }
                hash+= s[j];
                j++;
            }
            ans.push_back(hash);
            i = j+8;
        }
        return ans;
    }
};
