//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(-1*arr[i]);
        }
        int c=0;
        while(pq.size() >= 2)
        {
            int x=pq.top();
            if(abs(x) >= k)
            {
                break;
            }
            else
            {
                pq.pop();
                int y=pq.top();
                pq.pop();
                pq.push(x+y);
                c+=1;
            }
        }
        if(abs(pq.top()) < k)
        {
            return -1;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends