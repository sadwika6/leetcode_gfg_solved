//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        long long mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(a[i],mx);
        }
        vector<long long>vc(mx+1,1);
        long long k=1;
        long long m=1e9+7;
        for(int i=1;i<=mx;i++)
        {
            k=((k%m)*(i%m))%m;
            vc[i]=k;
        }
        vector<long long>res(n,0);
        for(int i=0;i<n;i++)
        {
            res[i]=vc[a[i]];
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends