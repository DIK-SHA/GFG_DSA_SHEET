// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here c
        //dekho teen pointer bna lo : pehla pointer zero ka count rakhega, 
        //dusra pointer 2 ka count sambhalega auur teesra traverse krega array pe
        int s=0,e=n-1,temp=0;
        while(temp<=e){
            if(a[temp]==0){
                swap(a[temp],a[s]);
                temp++;
                s++;
            }
            else if(a[temp]==2){
                swap(a[temp],a[e]);
                e--;
            }
            else{
                temp++;
            }
        }
        
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends