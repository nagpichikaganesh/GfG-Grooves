//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // Your Code goes here.
        sort(greed.begin(), greed.end());
        sort(cookie.begin(), cookie.end());
        int i = 0, j = 0;
        while(i < greed.size() && j < cookie.size()){
            if(cookie[j] >= greed[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> greed;
        int num;
        while (ss >> num)
            greed.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> cookie;
        ss.str(input);
        while (ss >> num)
            cookie.push_back(num);

        Solution obj;
        cout << obj.maxChildren(greed, cookie) << endl;
    }
    return 0;
}
// } Driver Code Ends