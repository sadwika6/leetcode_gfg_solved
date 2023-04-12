//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool oper(char c)
    {
        if(c=='^' or c=='*' or c=='/' or c=='+' or c=='-')
        {
            return true;
        }
        return false;
    }
    string postToInfix(string exp) {
        // Write your code here
        stack<string>st;
        for(int i=0;i<exp.size();i++)
        {
            if(!oper(exp[i]))
            {
                string s="";
                s+=exp[i];
                st.push(s);
            }
            else
            {
                string A,B;
                A=st.top();
                st.pop();
                B=st.top();
                st.pop();
                st.push('('+B+exp[i]+A+')');
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends