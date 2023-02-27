#include <bits/stdc++.h>
#include<iostream>

using  namespace std;

int main()
{   
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int max=0;
        int cat[n],t[n];
        for(int i=0; i<n; i++){
            cin>>cat[i];
            if(max<cat[i]){
                max= cat[i];
            }
        }

        int mint[max]={0},count=max,sum=0,f=0;
        for(int i=0; i<n; i++){
            cin>>t[i];
            if(mint[cat[i]-1]==0){
                mint[cat[i]-1]=t[i]+1;
            }
            else if(mint[cat[i]-1]>(t[i]+1)){
                mint[cat[i]-1]=t[i]+1;
            }
        }

        int i=0;
        int j=0;
        sort(mint,mint+max);
        //  for(int i=0; i<max; i++){
        //     cout<<mint[i]<<" ";
        // }
        // cout<<" sorted mint.."<<endl;

        while(j<k && i<max){
            // cout<<mint[i]<<" mint["<<i<<"]"<<endl;
            if(mint[i]!=0){
                sum=sum+mint[i]-1;
                j++;
            }
            else{
                count--;
            }
            if(k>count){
                f=1;
                break;
            }
            i++;
        }

        if(f==1){
            cout<<-1<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}
