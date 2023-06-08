//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        vector<int>vc;
        for(int i=1;i<=n;i++)
        {
            vc.push_back(i);
        }
        //vector<int>res;
        for(int i=1;i<k;i++)
        {
            next_permutation(vc.begin(),vc.end());
        }
        string res="";
        for(int i=0;i<vc.size();i++)
        {
            res+=('0'+vc[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends