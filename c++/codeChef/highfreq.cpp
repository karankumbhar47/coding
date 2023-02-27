#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define lli long long int
#define ll long long

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli arr[n];
        for (lli i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        lli f=0,s=0,c=0,p=arr[0];
        for (lli i = 0; i < n; i++){
            if (arr[i]==p){
                c+=1;
            }
            else{
                p=arr[i];
                if (f<=c){
                    s=f;
                    f=c;
                }
                if (c<f && s<c){
                    s=c;
                }
                c=1;
            }
        }
        if (f<=c){
            s=f;
            f=c;
        }
        if (c<f && s<c){
            s=c;
        }
        cout<<f<<" "<<s<<endl;
        if(f%2==0){
            cout<<max(f/2,s)<<endl;
        }
        else{
            cout<<max((f/2)+1,s)<<endl;
        }
        
    }
    return 0;
}