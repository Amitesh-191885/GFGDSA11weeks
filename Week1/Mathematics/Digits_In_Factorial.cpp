//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double ans=0;
        for(int i=1;i<=N;i++){
          //using mathematics to count factorials number of digit in O(N) 
            ans = ans + log10(i);
        }
        return (floor(ans)+1);
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends