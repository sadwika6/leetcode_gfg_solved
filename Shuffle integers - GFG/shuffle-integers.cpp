//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    for(int i=n/2;i<n;i++)
	    {
	        arr[i]=(arr[i]*100000)+arr[i-(n/2)];
	    }
	    int i=0;
	    int j=n/2;
	    while(j < n)
	    {
	        arr[i]=arr[j]%100000;
	        arr[i+1]=arr[j]/100000;
	        i+=2;
	        j++;
	    }
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends