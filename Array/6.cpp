// { Driver Code Starts
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
    	int max=arr[n-1]+1;   // dont forget adding extra one 
    	int mine=0;//minimum element 
    	int maxe=n-1;//maximum element
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]=arr[i]+(arr[maxe]%max)*max;
    	        maxe--;
    	    }
    	    else{
    	        arr[i]=arr[i]+(arr[mine]%max)*max;
    	        mine++;
    	    }
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]=arr[i]/max; //agr yaha divide ki jagah mode krte toh yhi purana array mil jaata
    	}
    }
};

// { Driver Code Starts.

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