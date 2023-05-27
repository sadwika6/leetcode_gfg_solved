//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int i=0,j=len-1;
    long long m=0;
    while(i<j)
    {
        m=max((j-i)*min(A[i],A[j]),m);
        if(A[i] > A[j])
        {
            j--;
        }
        else if(A[i] < A[j])
        {
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    return m;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends