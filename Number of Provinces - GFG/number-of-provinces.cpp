//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int>adj1[],int i,vector<int>&vis)
    {
        vis[i]=1;
        for(auto it:adj1[i])
        {
            if(!vis[it])
            {
                dfs(adj1,it,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int>adj1[V+1];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j] == 1)
                {
                    adj1[i].push_back(j);
                }
            }
        }
        vector<int>vis(V,0);
        int c=0;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                dfs(adj1,i,vis);
                c+=1;
                
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends