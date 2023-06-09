//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	 reverse(arr+n/2,arr+n);
    	 for(int i=n/2;i<n;i++)
    	 {
    	     arr[i]=(arr[i-(n/2)]*100000)+arr[i];
    	 }
    // 	 for(int i=0;i<n/2;i++)
    // 	 {
    // 	     arr[i]=arr[i+(n/2)]%100000;
    // 	     arr[i+1]=arr[i+(n/2)]/100000;
    // 	 }
         int i=0;
         int j=n/2;
         while(j<n)
         {
             arr[i]=arr[j]%100000;
             arr[i+1]=arr[j]/100000;
             i+=2;
             j++;
         }
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends