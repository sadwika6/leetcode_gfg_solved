//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int setBit(int n)
    {
        for(int i=0;i<=log2(n);i++)
        {
            if((n&(1<<i)))
            {
                return i;
            }
        }
        return -1;
    }
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        int k=setBit(x);
        int c1=0,c2=0;
        //cout << k;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&(1<<k)))
            {
                c1=c1^nums[i];
            }
            else
            {
                c2=c2^nums[i];
            }
        }
        if(c1 > c2)
        {
            return {c2,c1};
        }
        return {c1,c2};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends