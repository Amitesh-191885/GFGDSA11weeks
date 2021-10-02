// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> res;
        int D = pow(b,2)-4*a*c;
        int root1,root2;
        if(D==0){
            root1 = floor((-b)/(2*a));
            res.push_back(root1);
            res.push_back(root1);
            return res;
        }
        else if(D>0){
            root1 = floor(((-b)-(sqrt(D)))/(2*a));
            root2 = floor(((-b)+(sqrt(D)))/(2*a));
            res.push_back(root1);
            res.push_back(root2);
            sort(res.begin(),res.end(),greater<int>());
            
            return res;
        }
        else{
            res.push_back(-1);
            return res;
        }
        
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends