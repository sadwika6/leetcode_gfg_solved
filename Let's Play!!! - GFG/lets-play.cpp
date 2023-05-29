//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void rotate_left(vector<vector<int>>&mat,vector<vector<int>>&res,int x,int i,int m)
    {
        int k=0;
        for(int j=x;j<m;j++)
        {
            res[i][k]=mat[i][j];
            k++;
        }
        for(int j=0;j<x;j++)
        {
            res[i][k]=mat[i][j];
            k++;
        }
    }
    void rotate_right(vector<vector<int>>&mat,vector<vector<int>>&res,int x,int i,int m)
    {
        int k=0;
        for(int j=m-x;j<m;j++)
        {
            res[i][k]=mat[i][j];
            k++;
        }
        for(int j=0;j<m-x;j++)
        {
            res[i][k]=mat[i][j];
            k++;
        }
    }
    int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        // code here
        x=x%m;
        vector<vector<int>>res(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                rotate_left(mat,res,x,i,m);
            }
            else
            {
                rotate_right(mat,res,x,i,m);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(res[i][j]!=mat[i][j])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        int x;
        cin >> x;
        
        Solution ob;
        cout<<ob.isSuperSimilar(n,m,mat,x)<<endl;
    }
    return 0;
}
// } Driver Code Ends