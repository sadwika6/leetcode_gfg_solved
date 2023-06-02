//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    vector<int>prime;
    void precompute(){
        vector<bool>p(1e6+1,true);
        p[0]=false;
        p[1]=false;
        for(int i=2;i<1e6+1;i++)
        {
            if(p[i])
            {
                prime.push_back(i);
                for(int j=2*i;j<1e6+1;j+=i)
                {
                    p[j]=false;
                }
            }
        }
    }
    void dfs(int &c,vector<vector<int>>&g,int x,vector<int>&vis)
    {
        vis[x]=1;
        c+=1;
        for(auto it:g[x])
        {
            if(!vis[it])
            {
                dfs(c,g,it,vis);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        //cout << g.size() << " " << g[0].size() << endl;
        // for(int i=0;i<g.size();i++)
        // {
        //     //mp[g[i][0]]=g[i][1];
        //     cout << g[i][0] << " " << g[i][1] << endl;
        // }
        if(m==0)
        {
            return -1;
        }
        vector<int>vis(n+1,0);
        int mx=0,c=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                c=0;
                dfs(c,g,i,vis);
                if(c > mx)
                {
                    mx=c;
                }
            }
        }
        //cout << mx <<endl;
        return prime[mx-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends