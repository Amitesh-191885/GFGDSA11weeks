/*
Given number N, find an integer denoting the smallest number evenly divisible by each number 1 to N.
If N=3;
res = smallest number which is divisible by 1,2,3. i.e. 6.
*/
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    long long getSmallestDivNum(long long n){
        // code here
        long long ans =1;
        for(long long i=2;i<=n;i++)
            ans = (ans*i)/gcd(ans,i);
            
    return ans;;
    }
    
    long long gcd(long long A,long long B){
        if(B<A){
            swap(A,B);
        }
        if(A==0){
            return B;
        }
        else return gcd((B%A),A);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<< ob.getSmallestDivNum(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends