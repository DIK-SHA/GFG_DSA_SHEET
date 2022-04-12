// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    bool flag=true;// < sign k liye flag ko true mana hia aur > sign k liye flag ko false mana hai 
	    for(int i=0;i<n-1;i++){
	        if(flag && arr[i]>arr[i+1]) //agr < sign hai aur arr[i] > arr[i+1] hai toh swap krdo
	        { 
	           swap(arr[i],arr[i+1]);
	           flag=false;
	        }
	        else if(!flag && arr[i]<arr[i+1])//agr > sign hai aur arr[i] < arr[i+1] hia toh swap krdo
	        {
	            swap(arr[i],arr[i+1]);
	            flag=true;
	        }
	        else // agr sab sahi hai toh bas sign change karenge  
	        {
	            if(flag) // > is changed to <
	                flag=false;
	            else //and < is changed to >
	                flag=true;
	        }
	    }
	 }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends