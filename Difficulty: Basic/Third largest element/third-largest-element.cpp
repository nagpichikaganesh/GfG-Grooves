//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
         int max = INT_MIN;
        int smax = INT_MIN;
        int tmax = INT_MIN;
        if(arr.size()<3) return -1; // Because we need atleast three elements to find third largest element
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){ 
                tmax = smax;
                smax = max;
                max = arr[i];
            }else if(arr[i]>smax){
                tmax = smax;
                smax = arr[i];
            }else if(arr[i]>tmax){
                tmax = arr[i];
            }
        }
        return tmax;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.thirdLargest(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends