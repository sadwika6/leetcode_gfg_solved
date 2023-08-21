//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&matrix)
    {
        if(i<0 or j<0 or i>=matrix.size() or j>=matrix[0].size())
        {
            return 0;
        }
        else
        {
            if(matrix[i][j] == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int c=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j] == 1)
                {
                    int x=fun(i-1,j,matrix)+fun(i,j-1,matrix)+fun(i-1,j-1,matrix)+fun(i+1,j,matrix)+fun(i,j+1,matrix)+fun(i+1,j+1,matrix)+fun(i-1,j+1,matrix)+fun(i+1,j-1,matrix);
                    //cout << fun(i,j+1,matrix) << endl;
                    if(x>0 and x%2 == 0)
                    {
                        c+=1;
                    }
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends