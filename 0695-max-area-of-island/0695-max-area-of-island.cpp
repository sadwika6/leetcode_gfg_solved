class Solution {
public:
    void dfs(int i,int j,int &c,vector<vector<int>>&grid)
    {
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size())
        {
            return;
        }
        if(grid[i][j] == 1)
        {
            grid[i][j]=2;
            c+=1;
            dfs(i+1,j,c,grid);
            dfs(i-1,j,c,grid);
            dfs(i,j+1,c,grid);
            dfs(i,j-1,c,grid);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int c=0,m=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {   
                c=0;
                if(grid[i][j]==1)
                {
                    dfs(i,j,c,grid);
                }
                if(c>m)
                {
                    m=c;
                }
            }
        }
        return m;
    }
};