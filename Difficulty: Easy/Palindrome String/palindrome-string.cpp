//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
        string str2;
        for(char c : S){
            if(isalpha(c)){
            str2.push_back(tolower(c));
            }
        }
        int i = 0;
        int j = str2.length() - 1;
        bool flag = true;
        while(i < j){
            if(str2[i] != str2[j]){
                return false;
            }
                i++, j--;
        }
        return flag;

    }

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends