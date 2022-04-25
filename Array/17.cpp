// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        int asum=0;
        int bsum=0;
        for(int i=0;i<n;i++){
           asum+=A[i]; 
        }
        for(int j=0;j<m;j++){
            bsum+=B[j];
        }
        int i=0,j=0;
        while(i<n && j<m){
            if(asum-A[i]+B[j]==bsum-B[j]+A[i])
                return 1;
            else if(asum-A[i]+B[j]>bsum-B[j]+A[i])
                i++;
            else
                j++;
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends