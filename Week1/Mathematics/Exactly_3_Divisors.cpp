//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int count=0;
        for(int i=2;i*i<=N;i++){
            if(isPrime(i)){
                if(i*i<=N){
                    count++;
                }
            }
        }
        return count;
    }
    
    bool isPrime(int n){
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    return false;
                    break;
                }
            }
        
        return true;    
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
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends