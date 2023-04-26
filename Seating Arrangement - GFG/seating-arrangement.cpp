//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& s){
        // Write your code here.
        int c=0;
        for(int i=0;i<m-1;i++)
        {
            if(i==0)
            {
                if(s[i]==0 and s[i+1]==0)
                {
                    c+=1;
                    s[i]=1;
                }
            }
            else
            {
                if(s[i]==0 and s[i-1]==0 and s[i+1]==0)
                {
                    c+=1;
                    s[i]=1;
                }
            }
        }
        if(s[m-1]==0 and s[m-2]==0)
        {
            c+=1;
        }
        if(c>=n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends