//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            //int x=log2(n)+1;
            vector<int>vc;
            //cout << x << endl;
            // cout << (n<<d) << endl;
            // cout << n << " " << 16-d << endl;
            // cout << (n<<(16-d)) << endl;
            // cout << ((n<<d)|(n>>(16-d))) << endl;
            // cout << pow(2,16)-1 <<  endl;
            // cout << (131071&112) << endl;
            d=d%16;
            vc.push_back((((n<<d)|(n>>(16-d)))&65535));
            vc.push_back((((n>>d)|(n<<(16-d)))&65535));
            return vc;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends