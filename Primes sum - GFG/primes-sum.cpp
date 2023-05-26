//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here
        vector<int>vc(N+1,1);
        vc[0]=vc[1]=0;
        for(int i=2;i*i<=N;i++)
        {
            if(vc[i] == 1)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    vc[j] = 0;
                }
            }
        }
        for(int i=2;i<N;i++)
        {
            if(vc[i] == 1)
            {
                if(vc[N-i] == 1)
                {
                    return "Yes";
                }
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends