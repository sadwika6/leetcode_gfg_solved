//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void fun1(vector<vector<int>>&a,int l,int r,int t,vector<int>&vc)
    {
        for(int i=l;i<=r;i++)
        {
            vc.push_back(a[t][i]);
        }
    }
    void fun2(vector<vector<int>>&a,int t,int b,int r,vector<int>&vc)
    {
        for(int i=t;i<=b;i++)
        {
            vc.push_back(a[i][r]);
        }
    }
    void fun3(vector<vector<int>>&a,int r,int l,int b,vector<int>&vc)
    {
        for(int i=r;i>=l;i--)
        {
            vc.push_back(a[b][i]);
        }
    }
    void fun4(vector<vector<int>>&a,int b,int t,int l,vector<int>&vc)
    {
        for(int i=b;i>=t;i--)
        {
            vc.push_back(a[i][l]);
        }
    }
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        int t=0,b=R-1,l=0,r=C-1;
        int i=0;
        vector<int>vc;
        while(t<=b and l<=r)
        {
            if(i%4==0)
            {
                fun1(a,l,r,t,vc);
                t++;
                i++;
            }
            else if(i%4==1)
            {
                fun2(a,t,b,r,vc);
                r--;
                i++;
            }
            else if(i%4 == 2)
            {
                fun3(a,r,l,b,vc);
                b--;
                i++;
            }
            else
            {
                fun4(a,b,t,l,vc);
                l++;
                i++;
            }
        }
        reverse(vc.begin(),vc.end());
        return vc;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends