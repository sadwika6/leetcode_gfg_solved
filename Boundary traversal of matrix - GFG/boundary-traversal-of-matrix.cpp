//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>vc;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(vis[0][i]==0)
            {
                vc.push_back(matrix[0][i]);
                vis[0][i] = 1;
            }
        }
        //cout << "*" << endl;
        for(int i=1;i<n;i++)
        {
            if(vis[i][m-1]==0)
                vc.push_back(matrix[i][m-1]);
                vis[i][m-1] = 1;
        }
        //cout << "*" << endl;
        for(int i = m-2;i>=0;i--)
        {
            if(vis[n-1][i]==0)
                vc.push_back(matrix[n-1][i]);
                vis[n-1][i] = 1;
        }
        //cout << "*" << endl;
        for(int i=n-2;i>=1;i--)
        {
            if(vis[i][0]==0)
                vc.push_back(matrix[i][0]);
                vis[i][0] = 1;
        }
        //cout << "*" << endl;
        return vc;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends