//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string a) {
        //code here
        int n=a.size();
        int lps[n+1][n+1];
        string a1=a;
        reverse(a1.begin(),a1.end());
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0)
                {
                    lps[i][j]=0;
                }
                else if(a[i-1]==a1[j-1])
                {
                    lps[i][j]=lps[i-1][j-1]+1;
                }
                else
                {
                    lps[i][j]=max(lps[i-1][j],lps[i][j-1]);
                }
            }
        }
        return lps[n][n];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends