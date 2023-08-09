//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        // vector<int>vc(N+1);
        // for(int i=0;i<=N;i++)
        // {
        //     vc[i]=i;
        // }
        // for(int i=2;i*i<=N;i++)
        // {
        //     if(vc[i]==i)
        //     {
        //         for(int j=i*i;j<=N;j+=i)
        //         {
        //             if(vc[j]==j)
        //             {
        //                 vc[j]=i;
        //             }
        //         }
        //     }
        // }
        // int t=N;
        // while(vc[t]!=t)
        // {
        //     t=(t/vc[t]);
        // }
        // return t;
        for(int i=2;i*i <= N;i++)
        {
            if(N%i==0)
            {
                N=N/i;
                i--;
            }
        }
        return N;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends