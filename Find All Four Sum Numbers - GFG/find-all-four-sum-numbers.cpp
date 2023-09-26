//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>res;
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int l = j+1;
                int r = arr.size()-1;
                while(l<r)
                {
                    int s = arr[i]+arr[j]+arr[l]+arr[r];
                    if(s == k)
                    {
                        res.push_back({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(s < k)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
        }
        for(int i=0;i<res.size();i++)
        {
            sort(res[i].begin(),res[i].end());
            if(st.find(res[i]) == st.end())
            {
                ans.push_back(res[i]);
                st.insert(res[i]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends