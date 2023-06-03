//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    // int fun(int n)
    // {
    //     for(int i=31;i>=0;i--)
    //     {
    //         if((n&(i<<1)))
    //         {
    //             return i;
    //         }
    //     }
    //     return 0;
    // }
    int countSetBits(int n)
    {
        // Your logic here
        int k=log2(n)+1;
        int res=0;
        for(int i=0;i<=k;i++)
        {
            int s=pow(2,i+1);
            res+=(((n+1)/s))*pow(2,i);
            if((n+1)%s > pow(2,i))
            {
                int x=(((n+1)%s) - (pow(2,i)));
                res+=x;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends