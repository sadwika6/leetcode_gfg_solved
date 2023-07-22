//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    vector<int> fun(vector<int>&nums,int x)
    {
        vector<int>vc;
        int k=log2(x);
        for(int i=0;i<=k;i++)
        {
            if((x >> i)&1)
            {
                vc.push_back(nums[i]);
                //cout << i << " " << nums[i] << endl;
            }
        }
        return vc;
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++)
        {
            vector<int>vc;
            vc=fun(nums,i);
            sort(vc.begin(),vc.end());
            st.insert(vc);
        }
        vector<vector<int>>res;
        for(auto it:st)
        {
            res.push_back(it);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends