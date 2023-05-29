//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> D, string Pattern) {
        // code here
        map<string,string>mp;
        string s="";
        vector<string>vc;
        for(int i=0;i<N;i++)
        {
            s="";
            for(int j=0;j<D[i].size();j++)
            {
                if(D[i][j] >= 'A' and D[i][j] <= 'Z')
                {
                    s+=D[i][j];
                }
                if(s==Pattern)
                {
                    vc.push_back(D[i]);
                    break;
                }
            }
        }
        if(vc.empty())
        {
            return {"-1"};
        }
        return vc;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends