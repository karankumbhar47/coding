#include <iostream>
#define lli long long int
using namespace std;

int main() {
    lli t;
    cin>>t;
    while(t--){
        lli n,d0=0,d1=0,d2=0,sum=0;
        cin>>n;
        lli arr[n];
        for(lli i=0; i<n; i++){
            cin>>arr[i];
            if (arr[i]%3==0){
                d0++;
            }
            else if(arr[i]%3==1){
                d1++;
            }
            else{
                d2++;
            }
        }
        if(d1>d2){
            sum=sum+d2;
            if((d1-d2)%4==1){
                sum+= 6 + (d1-d2)/4*3;
            }
            else if((d1-d2)%4==2){
                sum+= 5 + (d1-d2)/4*3;
            }
            else if((d1-d2)%4==3){
                sum+= 4 + (d1-d2)/4*3;
            }
            else{
                sum+= (d1-d2)/4*3;
            }
        }
        else if(d2>d1){
            lli temp = d1;
            d1=d2;
            d2=temp;
            sum=sum+d2;
            if((d1-d2)%4==1){
                sum+= 6 + (d1-d2)/4*3;
            }
            else if((d1-d2)%4==2){
                sum+= 5 + (d1-d2)/4*3;
            }
            else if((d1-d2)%4==3){
                sum+= 4 + (d1-d2)/4*3;
            }
            else{
                sum+=  (d1-d2)/4*3;
            }
        }
        else{
            sum+=d1;
        }
        std::cout <<sum << std::endl;
    }
    return 0;
}
  