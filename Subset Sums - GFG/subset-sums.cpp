//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int fun(vector<int>&vc,int k)
    {
        int n=log2(k);
        int s=0;
        for(int i=0;i<=n;i++)
        {
            if((k>>i)&1)
            {
                s+=vc[i];
            }
        }
        return s;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>vc;
        for(int i=0;i<pow(2,N);i++)
        {
            vc.push_back(fun(arr,i));
        }
        return vc;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends