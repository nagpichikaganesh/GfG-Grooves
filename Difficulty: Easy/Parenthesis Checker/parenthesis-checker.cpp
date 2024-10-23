//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool ispar(string x) {
        // code here
        stack<char> st;
        for(char c : x){
            if(c == '[' || c == '{' || c == '('){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                    char top = st.top();
                    if((c == '}' && top != '{') ||
                       (c == ')' && top != '(') ||
                       (c == ']' && top != '[')) 
                       return false;
                    st.pop();
                }
            }
            return st.empty();
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
// } Driver Code Ends