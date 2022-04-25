// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++
bool ispossible(int arr[],int n,int m,long long mid){
    int pagesum=0;
    int person=1;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            person++;
            if(person>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        long long si=0;
        long long ei=0;
        for(int i=0;i<N;i++){
            ei+=A[i];
        }
        long long ans=-1;
        long long mid=si+(ei-si)/2;
        while(si<=ei){
            if(ispossible(A,N,M, mid)){
                ans=mid;
                ei=mid-1;
            }
            else{
                si=mid+1;
            }
            mid=si+(ei-si)/2;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends