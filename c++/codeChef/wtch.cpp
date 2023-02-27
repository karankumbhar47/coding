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
        lli n,c=0;
        cin>>n;
        char s[n];
        for (lli i = 0; i < n; i++){
            cin>>s[i];
        }
        if (s[0]=='0' && s[1]=='0'){
            s[0]='1';
        }
        else if
        
        for (lli i = 1; i < n; i++){
            if (s[i-1]=='0' && s[i]=='0'){
                //cout<<i<<" "<<s[i]<<endl;
                c+=1;
                s[i-1]='1';
            } 
        }
        cout<<c<<" "<<s<<endl;
    }
    return 0;
}