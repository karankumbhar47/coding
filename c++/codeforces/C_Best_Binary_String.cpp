#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<bitset>
#include<cmath>
#include<numeric>
#include<limits>
#include<algorithm>

#define lli long long int
#define ll long long
#define loop(i,start,end) for (lli i = start; i < end; i++)
#define rloop(i, n) for (lli i = n-1; i >= 0; i--)
#define arrIn(arr,n) loop(i,0,n){cin>>arr[i];}
#define cts(k) cout<<k<<" ";
#define ctl(k) cout<<k<<endl;
#define all(vec) vec.begin(),vec.end();
#define printArr(arr,n) loop(i,0,n){cts(arr[i]);}
#define printPair(vec) loop(i,0,vec.size()){cts(vec[i].first);ctl(vec[i].second);}

using  namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        lli n = s.length();
        loop(i,0,n){
            if(s[i]=='?'){
                if(i==0){
                    if(s[i+1]=='?'){
                        s[i]='0';
                    }
                    else{
                        s[i+1]=s[i]; 
                    }
                }
                else{
                    s[i]=s[i-1];
                }
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}