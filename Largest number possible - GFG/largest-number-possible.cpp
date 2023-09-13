//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if((S == 0 and N > 1) or S > 9*N)
        {
            return "-1";
        }
        string res="";
        while(S >= 9)
        {
            res+='9';
            S-=9;
            N--;
        }
        //cout << S << endl;
        if(N)
        {
            res+='0'+S;
            N--;
        }
        while(N--)
        {
            res+='0';
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends