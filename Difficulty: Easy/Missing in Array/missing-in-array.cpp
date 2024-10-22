//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n = arr.size(); // Get the size of the array

        // Step 1: Mark the visited numbers
        for (int i = 0; i < n; i++) {
            int index = abs(arr[i]) - 1; // Get the index to mark
            
            // Only mark if it's within bounds and not already negative
            if (index < n && arr[index] > 0) {
                arr[index] = -arr[index]; // Mark as visited by negating the value at that index
            }
        }

        // Step 2: Find the first index that has a positive value
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                return i + 1; // Return the missing number (1-based index)
            }
        }

        // If no missing number found, return the size of the array + 1
        return n + 1; // If all numbers are present

    }
    };

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
    }

    return 0;
}

// } Driver Code Ends