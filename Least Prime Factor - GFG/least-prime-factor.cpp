//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void prime(vector<int>&p,vector<int>&r)
  {
      p[0]=p[1]=0;
      for(int i=2;i<p.size();i++)
      {
          if(p[i]==1)
          {
              r.push_back(i);
              for(int j=2*i;j<p.size();j+=i)
              {
                  p[i]=0;
              }
          }
      }
  }
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>p(n+1,1);
        vector<int>r;
        prime(p,r);
        vector<int>vc;
        vc.push_back(0);
        vc.push_back(1);
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<r.size();j++)
            {
                if(i%r[j]==0)
                {
                    vc.push_back(r[j]);
                    break;
                }
            }
        }
        return vc;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends