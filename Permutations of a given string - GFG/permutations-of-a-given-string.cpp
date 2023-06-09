//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permutation(string &s1,string &s,int n,set<string>&res,int freq[])
	    {
	        if(s1.size()==n)
	        {
	            res.insert(s1);
	        }
	        else
	        {
	            for(int i=0;i<n;i++)
	            {
	                if(freq[i] == 0)
	                {
	                    s1.push_back(s[i]);
	                    freq[i]=1;
	                    permutation(s1,s,n,res,freq);
	                    freq[i]=0;
	                    s1.pop_back();
	                }
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string>res;
		    int n=S.size();
		    int freq[n]={0};
		    string s1="";
		    permutation(s1,S,n,res,freq);
		    vector<string>ans;
		    for(auto it:res)
		    {
		        ans.push_back(it);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends