//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    bool dfs(int i,int j,vector<vector<int>>&matrix)
    {
        if(i<0 or i>=matrix.size() or j<0 or j>=matrix[0].size())
        {
            return false;
        }
        if(matrix[i][j]==0 or matrix[i][j]==2)
        {
            return true;
        }
        matrix[i][j]=2;
        bool top=dfs(i-1,j,matrix);
        bool left=dfs(i,j-1,matrix);
        bool bottom=dfs(i+1,j,matrix);
        bool right=dfs(i,j+1,matrix);
        return top&&left&&right&&bottom;
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int c=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j] == 1 and dfs(i,j,matrix))
                {
                    c+=1;
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends