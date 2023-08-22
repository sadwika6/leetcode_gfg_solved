//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int mr=0,mc=0;
        for(int i=0;i<n;i++)
        {
            int s1=0,s2=0;
            for(int j=0;j<n;j++)
            {
                s1+=matrix[i][j];
                s2+=matrix[j][i];
            }
            mr=max(mr,s1);
            mc=max(mc,s2);
        }
        int res1=0,res2=0;
        //cout << mr << " " << mc << endl;
        for(int i=0;i<n;i++)
        {
            int s1=0,s2=0;
            for(int j=0;j<n;j++)
            {
                s1+=matrix[i][j];
                s2+=matrix[j][i];
            }
            //cout << s2 << endl;
            if(s1 < mr)
            {
                res1+=mr-s1;
                //cout << res << "*" << endl;
            }
            if(s2 < mc)
            {
                //cout << res2 << endl;
                res2+=mc-s2;
            }
        }
        return max(res1,res2);
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends