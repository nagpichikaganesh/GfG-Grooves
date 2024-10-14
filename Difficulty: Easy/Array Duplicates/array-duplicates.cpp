//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<int> arr) {
        // code here
        unordered_map<int, int> freq;
        vector<int> dup;
        
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        
        for(const auto &entry : freq){
            if(entry.second > 1){
                dup.push_back(entry.first);
            }
        }
        if(dup.empty()) return {-1};
        sort(dup.begin(), dup.end());
        return dup;
        
    }
};


//{ Driver Code Starts.

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}

// } Driver Code Ends