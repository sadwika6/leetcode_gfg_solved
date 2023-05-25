//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int x=0,d=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='.')
                {
                    d++;
                    if(i>0)
                    {
                        if(s[i-1]!='.')
                        {
                            if(x>=0 and x<=255)
                            {
                                x=0;
                            }
                            else
                            {
                                return 0;
                            }
                        }
                        else
                        {
                            return 0;
                        }
                    }
                }
                else if(s[i]-'0' < 10)
                {
                    if(s[i] == '0')
                    {
                        if(i!=0 and i<(s.size()-1))
                        {
                            if(s[i-1]=='0' or s[i+1]=='0')
                            {
                                return 0;
                            }
                            else if(s[i-1]=='.' and (s[i+1]!='.' and s[i+1]!='0'))
                            {
                                return 0;
                            }
                        }
                    }
                    x=(x*10)+(s[i]-'0');
                }
                else
                {
                    return 0;
                }
            }
            if(d==3)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends