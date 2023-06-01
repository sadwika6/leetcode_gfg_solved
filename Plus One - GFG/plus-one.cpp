//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        vector<int>vc;
        int c=1,s=0;
        for(int i=N-1;i>=0;i--)
        {
            s=arr[i]+c;
            vc.push_back(s%10);
            c=s/10;
        }
        if(c > 0)
        {
            vc.push_back(c);
        }
        reverse(vc.begin(),vc.end());
        return vc;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends