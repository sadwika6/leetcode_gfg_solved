//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int c=0,m=1,s=0;
        int z=0,o=0;
        map<int,int>mp;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=-1;
            }
        }
        for(int i=0;i<N;i++)
        {
            s+=arr[i];
            if(s==0)
            {
                c=i+1;
            }
            if(mp.find(s)!=mp.end())
            {
                c=max(c,i-mp[s]);
            }
            else
            {
                mp[s]=i;
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends