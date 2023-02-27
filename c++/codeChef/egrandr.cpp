#include <iostream>
#define lli long long int
using namespace std;

int main() {
	lli t;
	cin>>t;
	while(t--){
	    lli n;
	    cin>>n;
	    lli arr[n],f=0,e=0,sum=0;
	    for(lli i=0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]==2){
	            f=1;
	        }
	        else if(arr[i]==5){
	            e=1;
	        }
	        sum += arr[i];
	    }
        lli avg = sum/n;
        if(f==0 && e==1 && avg>=4){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
	}
	return 0;
}
