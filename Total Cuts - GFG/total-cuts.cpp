//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int>vc1;
        vector<int>vc2;
        int c=0,mn=INT_MAX,mx=0;;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]>mx)
            {
                mx=A[i];
            }
            vc1.push_back(mx);
        }
        for(int i=N-1;i>=0;i--)
        {
            if(A[i]<mn)
            {
                mn=A[i];
            }
            vc2.push_back(mn);
        }
        reverse(vc2.begin(),vc2.end());
        /*for(int i=0;i<N;i++)
        {
            cout<<vc1[i]<<" ";
        }
        for(int i=0;i<N;i++)
        {
            cout<<vc2[i]<<" ";
        }*/
        for(int i=0;i<N-1;i++)
        {
            if(vc1[i]+vc2[i+1] >= K)
            {
                c+=1;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends