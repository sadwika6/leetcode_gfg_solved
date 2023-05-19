class Solution {
public:
    int fun(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size())
        {
            return 1;
        }
        return !grid[i][j];
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    c+=fun(grid,i-1,j)+fun(grid,i+1,j)+fun(grid,i,j+1)+fun(grid,i,j-1);
                }
            }
        }
        return c;
    }
};