// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        
        /*
        best solution
        using map
        */
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>1){
                return (i+1);
            }
        }
        return -1;
        
        
        
    /* O(N^2)
        int key;
        int ind;
        bool flag = true;
        for(int i=0;i<n;i++){
            key = arr[i];
            bool flag2 = true;
            for(int j=0;j<n;j++){
                if(key == arr[j] && j != i){
                    ind = i;
                    flag2 = false;
                    break;
                }
            }
            if(flag2 == false){
                flag = false;
                break;
            }
        }
        if(flag){
            return -1;
        }
        else{
            return (ind+1);
        }
        */
        
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends