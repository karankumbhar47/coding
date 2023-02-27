//{ Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}


// } Driver Code Ends



long long int nC2(long long int n){
    return (n*(n-1))/2;
}


long long int calculate(int a[], int n)
{
    sort(a,a+n);
    long long int ans=0;
    long long int p=a[0];
    long long int counter=0;
    for(long long int i=0; i<n; i++){
        if(p==a[i]){
            counter++;
        }
        else{
            if(counter>=2) {
                ans+=nC2(counter);
            }
            counter=1;
            p=a[i];
        }
    }
    if (counter>=2){
        ans+=nC2(counter);
    }
    return ans;
}
