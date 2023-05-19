//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(vector<int>adj[],int i,vector<int>&vis)
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(adj,it,vis);
            }
        }
    }
    bool fun(vector<int>&vis)
    {
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i=0;i<V;i++)
	    {
	        vector<int>vis(V,0);
	        dfs(adj,i,vis);
	        if(fun(vis))
	        {
	            return i;
	        }
	    }
	    return -1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends