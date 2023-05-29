//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    void fun1(vector<vector<int>>&a,int l,int r,int t,vector<int>&vc)
    {
        for(int i=l;i<=r;i++)
        {
            vc.push_back(a[t][i]);
        }
    }
    void fun2(vector<vector<int>>&a,int t,int b,int r,vector<int>&vc)
    {
        for(int i=t;i<=b;i++)
        {
            vc.push_back(a[i][r]);
        }
    }
    void fun3(vector<vector<int>>&a,int r,int l,int b,vector<int>&vc)
    {
        for(int i=r;i>=l;i--)
        {
            vc.push_back(a[b][i]);
        }
    }
    void fun4(vector<vector<int>>&a,int b,int t,int l,vector<int>&vc)
    {
        for(int i=b;i>=t;i--)
        {
            vc.push_back(a[i][l]);
        }
    }
    vector<int> spirallyTraverse(vector<vector<int> >a, int R, int C) 
    {
        // code here 
        int t=0,b=R-1,l=0,r=C-1;
        int i=0;
        vector<int>vc;
        while(t<=b and l<=r)
        {
            if(i%4==0)
            {
                fun1(a,l,r,t,vc);
                t++;
                i++;
            }
            else if(i%4==1)
            {
                fun2(a,t,b,r,vc);
                r--;
                i++;
            }
            else if(i%4 == 2)
            {
                fun3(a,r,l,b,vc);
                b--;
                i++;
            }
            else
            {
                fun4(a,b,t,l,vc);
                l++;
                i++;
            }
        }
        return vc;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends