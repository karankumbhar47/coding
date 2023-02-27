#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#define lli long long int
#define loop(i, n) for (lli i = 0; i < n; i++)
#define arrIn(arr,n) loop(i,n){cin>>arr[i];}
#define ll long long

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n,s,flag=0;
        cin>>s;
        while(s>0){
            lli rem=(s%10);
            if(rem==7){
                flag=1;
                break;
            }
            s=s/10;
            // cout<<s<<" "<<rem<<endl;
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}