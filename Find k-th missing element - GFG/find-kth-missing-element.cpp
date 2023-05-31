//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int MissingNumber(int a[], int b[], int k, int n, int m)
    {
        // Complete the function
        vector<int>vc;
        map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            mp[b[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]!=1)
            {
                vc.push_back(a[i]);
            }
        }
        if(vc.size() < k)
        {
            return -1;
        }
        return vc[k-1];
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.MissingNumber(a, b, k, n, m)<<endl;

    }
    return 0;
}

// } Driver Code Ends