//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    long long int fun(vector<int>&arr,long long int k)
    {
        int i=0,s=log2(k);
        long long int res=0;
        while(i<=s)
        {
            if((k>>i)&1)
            {
                //cout << i << " " << k << endl;
                res+=arr[i];
                //cout << arr[i] << endl;
            }
            i++;
        }
        //cout << res << endl;
        return res;
    }
    long long int countSubsets(vector<int>&arr, int n, int l, int r){
        //Write your code here
        long long int c=0;
        long long int k=pow(2,n);
        for(int i=0;i<k;i++)
        {
            long long int s=fun(arr,i);
            if(s>=l and s<=r)
            {
                c+=1;
                //cout << i << "**" << endl;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    int l, r;
	    cin >> l >> r;
	    Solution ob;
	    long long int ans = ob.countSubsets(arr, n, l, r);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends