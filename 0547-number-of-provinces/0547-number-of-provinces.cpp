class Solution {
public:
    void dfs(int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {
        int n=ic.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ic[i][j] == 1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis);
                c+=1;
            }
        }
        return c;
    }
};