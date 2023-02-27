#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<bitset>
#include<cmath>
#include<numeric>
#include<algorithm>

#define lli long long int
#define ll long long
#define loop(i,start,end) for (lli i = start; i < end; i++)
#define rloop(i, n) for (lli i = n-1; i >= 0; i--)
#define arrIn(arr,n) loop(i,0,n){cin>>arr[i];}
#define cts(k) cout<<k<<" ";
#define ctl(k) cout<<k<<endl;
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
        lli count=0;
        lli r=0,g=0;
        for (lli i = 0; i < n-1; i++){
            if(s[i]==s[i+1]){
                count++;
            }
            if(s[i]=='R'){
                r++;
            }
            else{
                g++;
            }
        }
        if (s[0]==s[n-1]){
            count++;
        }
        if(s[n-1]=='R'){
            r++;
        }
        else{
            g++;
        }
        // cout<<s<<" "<<count<<" "<<r<<" "<<g<<endl;
        if(r==g){
            if(count<=2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}