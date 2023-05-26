//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<int>vc(leaves+1,0);
        for(int i=0;i<N;i++)
        {
            if(frogs[i] <= leaves)
            {
                if(vc[frogs[i]] == 0)
                {
                    vc[frogs[i]]+=1;
                    for(int j=frogs[i]*2;j<=leaves;j+=frogs[i])
                    {
                        vc[j]+=1;
                    }
                }
            }
        }
        int c=0;
        for(int i=1;i<=leaves;i++)
        {
            if(vc[i] == 0)
            {
                c+=1;
            }
        }
        return c;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends