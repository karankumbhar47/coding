#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#define lli long long int
#define ll long long

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n,k,count=0,i=0;
        cin>>n>>k;
        lli size = 200000+1;
        lli arr[size]={0};
        for (lli i = 0; i < n; i++){
            lli temp;
            cin>>temp;
            arr[temp]++;
        }
        for (; i < size && count<k+1; i++){
            if (arr[i]==0){
                count++;
            }
        }
        cout<<(i-1)<<endl;
        // cout<<(i-1)<<endl;
        
    }

    return 0;
}