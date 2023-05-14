//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int k=0,m=1000,f;
        for(int i=0;i<N;i++)
        {
            if(arr[i].size()<m)
            {
                m=arr[i].size();
            }
        }
        string res="";
        for(int i=0;i<m;i++)
        {
            f=1;
            for(int j=1;j<N;j++)
            {
                if(arr[0][k] == arr[j][k])
                {
                    f+=1;
                }
            }
            if(f==N)
            {
                res+=arr[0][k];
                k++;
            }
            else
            {
                break;
            }
        }
        if(res.size() == 0)
        {
            return "-1";
        }
        else
        {
            return res;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends