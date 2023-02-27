#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int input[n];
	    int permu[n+1]={0};
	    int l=0,h=n,flag=0;
	    for(int i=0; i<n; i++){
	        cin>>input[i];
	        if (input[i]==0 && permu[0]==0) {
	            permu[0]=2;
	        }
	        else{
	            permu[input[i]]++;
	        }
	    }
        // for (int k = 0; k < n+1; k++)
        // {
        //     cout<<permu[k]<<" ";
        // }
        // cout<<"printing array.. "<<endl;
        
	    while(h>0 && l<n+1){

	        // cout<<h<<" "<<l<<" start.."<<endl;
	        while(permu[h]!=0 && h>1) h--;
	        while(permu[l]<2 && l<n) l++;
	        // cout<<h<<" "<<l<<" middle.."<<endl;
	        if(h<=1 && permu[1]!=0){
                // cout<<"official break"<<endl;
                break;
            }
            else if (l>=h) {
                flag=1;
                break;
                // cout<<"flag break"<<endl;
            }
	        sum = sum + (h-l);
	        permu[l]--;
	        h--;
	        if (permu[l]==1){
                l++;
            }
	        // cout<<h<<" "<<l<<" end.."<<endl;
	    }
	    if(flag==0 && permu[h]!=0 && permu[1]!=0){
	        cout<<sum<<endl;
	    }
	    else{
	        cout << (-1) << endl;
	    }
	}
	    
	return 0;
}
