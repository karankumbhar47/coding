#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#define lli long long int
#define loop(i, n) for (int i = 0; i < n; i++)
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
        loop(i,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        lli i=0,r=0,s=0;
        while(i<n){
            if(arr[i]==arr[i+1]){
                i+=2;
                r+=1;
            }
            else{
                i+=1;
                s+=1;
                r+=1;
            }
        }
        if(r%2==0){
            cout<<s<<endl;
        }
        else{
            cout<<(s+2)<<endl;
        }
    }
    return 0;
}