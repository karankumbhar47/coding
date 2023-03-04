#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
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
        lli n,m;
        cin>>n>>m;
        lli arr[m];
        loop(i,0,m){
            lli temp;
            cin>>temp;
            arr[i]=temp;
        }
        unordered_map<lli, lli> mp1,mp;
        stack <lli> st;
        loop(i,1,n+1){
            mp1.insert(i,-1);
            mp.insert(i,i);
        }
        m=min(n,m);
        for(lli i=0;i<m;i++){
            auto pt = *(--mp.end());
            mp1[pt->second]=i+1;
            mp.erase(pt);
        }
        
        for(auto i=mp.begin(); i!=mp.end(); i++){
            cout<< i->second<<" ";
        }
        cout<<endl;
    }
    return 0;
}