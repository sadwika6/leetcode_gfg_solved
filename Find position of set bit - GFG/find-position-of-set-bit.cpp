//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int c=1;
        vector<int>vc;
        for(int i=0;i<32;i++)
        {
            if((N>>i)&1)
            {
                c+=1;
                vc.push_back(i+1);
            }
            if(c > 2)
            {
                return -1;
            }
        }
        if(vc.size() == 0 or vc.size() > 1)
        {
            return -1;
        }
        else
        {
            return vc[0];
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends