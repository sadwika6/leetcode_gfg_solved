//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if(n==1 or n==2 or n==3)
        {
            return n;
        }
        long long int a,b,c;
        a=1;
        b=2;
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            c=c%1000000007;
            a=b;
            b=c;
            a=a%1000000007;
            b=b%1000000007;
        }
        return b;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends