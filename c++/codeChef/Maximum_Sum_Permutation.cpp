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
#define printArr(arr,n) loop(i,0,n){cts(arr[i]);}cout<<endl;
#define printPair(vec) loop(i,0,vec.size()){cts(vec[i].first);ctl(vec[i].second);}

using  namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n,q;
        cin>>n>>q;
        lli array[n];
        lli score[n];
        score[0] = 0;
        vector<pair<lli,lli>> vec;
        loop(i,0,n){
            cin>>array[i];
            vec.push_back({0,i});
        }
        sort(array,array+n);
        while(q--){
            lli a,b;
            cin>>a>>b;
            loop(i,a-1,b){
                vec[i].first++;
            }
        }
        lli ans[n];
        lli index = 0;
        lli x = 0;
        sort(vec.begin(),vec.end());
        for(auto val : vec){
            ans[val.second] = array[index];
            x+= array[index]*val.first; 
            index++;
        }
        cout<<x<<endl;
        printArr(ans,n);
        cout<<endl;
    }
    return 0;
}