//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
        vector<int>vc;
        for(int i=0;i<N;i++)
        {
            vc.push_back(S[i]);
        }
        for(int i=0;i<N;i++)
        {
            if(S[i]=='1')
            {
                if(i!=0)
                {
                    for(int j=i;j>=i-X;j--)
                    {
                        if(j>=0)
                        {
                            vc[j]='1';
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if(i!=N-1)
                {
                    for(int j=i;j<=i+X;j++)
                    {
                        if(j<=N-1)
                        {
                            vc[j]='1';
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<N;i++)
        {
            if(vc[i]=='0')
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends