#include<iostream>
#include<bits/stdc++.h>
#define lli long long int

using  namespace std;

int main()
{

    lli t;
    cin>>t; 
    while (t--){
        lli arr[10]={0};
        for(lli i=0; i<4; i++){
            lli temp;
            cin>>temp;
            arr[temp-1]++;
        }
        int c=0,i=0,j=9;
        while(i<j){
            while(arr[i]==0) i++;
            while(arr[j]==0) j--;
            if(i<j) c++;
            arr[i]--;
            arr[j]--;
        }
        cout<<c<<endl;

    }
        
    return 0;
}