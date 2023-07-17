//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    map<char,int>mp;
		    queue<char>q;
		    string res="";
		    for(int i=0;i<A.size();i++)
		    {
		        mp[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty() and mp[q.front()] > 1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        {
		            res+='#';
		        }
		        else
		        {
		            res+=q.front();
		        }
		    }
		    return res;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends