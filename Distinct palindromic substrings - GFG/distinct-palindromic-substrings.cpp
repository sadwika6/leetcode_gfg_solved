//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    // bool pal(string s)
    // {
    //     int i=0,j=s.size()-1;
    //     while(i<j)
    //     {
    //         if(s[i]!=s[j])
    //         {
    //             return false;
    //         }
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }
    int palindromeSubStrs(string s) {
        // code here
        int n=s.size();
        set<string>st;
        for(int i=0;i<n;i++)
        {
            int left,right;
            left=i;
            right=i;
            string str="";
            str+=s[i];
            st.insert(str);
            //cout << str << endl;
            left--;
            right++;
            while(left >= 0 and right < n)
            {
                //cout << left << " " << right << " " << s[left] << " " << s[right] << endl;
                str=s[left]+str;
                //cout << str << "**" << endl;
                str+=s[right];
                //cout << str << "***" << endl;
                if(s[left] == s[right])
                {
                    //cout << str << " ";
                    st.insert(str);
                }
                else
                {
                    break;
                }
                left--;
                right++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            int left,right;
            left=i;
            right=i+1;
            string str="";
            str+=s[i];
            str+=s[i+1];
            if(s[i] == s[i+1])
            {
                st.insert(str);
            }
            else
            {
                continue;
            }
            left--;
            right++;
            while(left >= 0 and right < n)
            {
                str=s[left]+str;
                str+=s[right];
                if(s[left] == s[right])
                {
                    //cout << str << "*" << endl;
                    st.insert(str);
                }
                else
                {
                    break;
                }
                left--;
                right++;
            }
        }
        // for(auto it:st)
        // {
        //     cout << it << endl;
        // }
        return st.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends