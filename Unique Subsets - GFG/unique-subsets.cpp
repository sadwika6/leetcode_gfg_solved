//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<int> fun(vector<int>&vc,int k)
    {
        vector<int>arr;
        int i=0;
        while(k)
        {
            if(k&1)
            {
                arr.push_back(vc[i]);
            }
            k=k>>1;
            i++;
        }
        return arr;
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>>st;
        vector<vector<int>>res;
        for(int i=0;i<pow(2,n);i++)
        {
            vector<int>vc;
            int j=0;
            int k=i;
            while(k)
            {
                if(k&1)
                {
                    vc.push_back(arr[j]);
                }
                k=k>>1;
                j++;
            }
            sort(vc.begin(),vc.end());
            st.insert(vc);
        }
        // for(auto it:st)
        // {
        //     res.push_back(it);
        // }
        // sort(res.begin(),res.end());
        return vector<vector<int>>(st.begin(),st.end());
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends