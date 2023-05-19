class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&grid)
    {
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size())
        {
            return;
        }
        if(grid[i][j] == 1)
        {
            grid[i][j]=0;
            dfs(i+1,j,grid);
            dfs(i-1,j,grid);
            dfs(i,j+1,grid);
            dfs(i,j-1,grid);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ct=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==0 or i==r-1 or j==0 or j==c-1)
                {
                    if(grid[i][j] == 1)
                    {
                        dfs(i,j,grid);
                    }
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j] == 1)
                {
                    ct+=1;
                }
            }
        }
        return ct;
    }
};