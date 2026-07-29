#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
// #define int long long int
// #define endl '\n'
const long long inf = 0x3f3f3f3f3f3f3f;
const long long UNVISITED = -2e18;
const int N = (int)100, M = 100, K = 100;
const int mod = (int)1e9+7;
/*
3*4/2 = 3*2 = 6
2*3/2 = 3 = 9;
	
*/
class TimeMap {
public:
    map<string, vector<pair<int,string>>>time;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        if(value == "happy"){
            time[key].push_back({timestamp, value});
        }
        else time[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(time.find(key) == time.end()) {
            return ""; // or handle error appropriately
        }
        auto& vec = time[key];
        auto it = upper_bound(vec.begin(), vec.end(), timestamp,
                              [](int ts, pair<int ,string>& a) {
                                  return ts < a.first;
                              });
        
        // If upper_bound returns begin(), no timestamp <= given timestamp
        if(it == vec.begin()) {
            return ""; // or handle appropriately
        }
        --it;
        return ((*it).second);

    }
};



// int main() {
// 	vector<int>arr;
// 	int n = 7;
// 	for(int i = 0; i<n; i++){int x;
// 	cin>>x;
// 	arr.push_back(x);}
// 	cout<<maxSumTrionic(arr);
// }