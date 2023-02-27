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
#define printMap(m) for(auto it= m.begin();it!=m.end(),it++){cts(it->first);cout<<": ";ctl(it->second);}
#define printMapPair(m) for(auto it= m.begin();it!=m.end(),it++){cts(it->first);cout<<": ";cts((it->second).first);ctl((it->second).second);}
#define printMapVector(m) for(auto it= m.begin();it!=m.end(),it++) {for(auto value:it->second){cout<<value<<" ";}cout<<endl;}


using  namespace std;

vector<vector<int>> adj(1e6);

vector<bool> vis(1e6, false);

void dfs(int node) {
    if (!vis[node]) {
        vis[node] = true;
        for (auto v: adj[node]) {
            dfs(v);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli p,s;
    cin>>p>>s;
    vector <pair<lli,lli>> arr;
    for(lli k=1; k<p+1; k++){
        vector <pair<lli,lli>> vec(s);
        loop(i,0,s){cin>>vec[i].first;}
        loop(i,0,s){cin>>vec[i].second;}
        sort(vec.begin(),vec.end());
        // printPair(vec)
        lli n=0;
        for(lli i=1; i<s; i++){
            if(vec[i-1].second>vec[i].second){
                n+=1;
            };
        }
        arr.push_back({n,k});
    }
    sort(arr.begin(),arr.end());

    for(lli i=0; i<s; i++){
        cout<<arr[i].second<<endl;
    }
    
    return 0;
}