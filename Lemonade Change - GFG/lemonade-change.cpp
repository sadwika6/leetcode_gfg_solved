//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int a=0,b=0,c=0;
        for(int i=0;i<N;i++)
        {
            if(bills[i] == 5)
            {
                a+=1;
            }
            if(bills[i] == 10)
            {
                if(a>0)
                {
                    a-=1;
                    b+=1;
                }
                else
                {
                    return false;
                }
            }
            if(bills[i] == 20)
            {
                if(a>0)
                {
                    a-=1;
                    if(b>0)
                    {
                        b-=1;
                        c+=1;
                    }
                    else if(a > 1)
                    {
                        a-=2;
                        c+=1;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends