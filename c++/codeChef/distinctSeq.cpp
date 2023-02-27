#include <bits/stdc++.h>
#define ll long long
#include<iostream>

using  namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char str[2*n];
        cin>>str;
        ll index=0,f=0;
        while(index<n && f==0){
            for (int i = index; i < index+(n/2); i++)
            {
                ll j= (index+(n/2))%n -1;
                if(str[i]!=str[j]){
                    f=1;
                    break;
                }
            }
            if (f==0) index++;
        }
        if(f==0){
            cout<<-1<<endl;
        }
        else{
            for (ll i = index; i < index+n/2; i++)
            {
                cout<<(i)
            }
            
        }
    }
    return 0;
}