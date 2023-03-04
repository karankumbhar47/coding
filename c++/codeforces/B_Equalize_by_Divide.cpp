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
#define all(vec) vec.begin(),vec.end();
#define printArr(arr,n) loop(i,0,n){cts(arr[i]);}
#define printPair(vec) loop(i,0,vec.size()){cts(vec[i].first);ctl(vec[i].second);}
#define printMap(mp) for(auto i=mp.begin(); i!=mp.end(); i++){cout<<i->first<<" "<<i->second<<endl;}

using  namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        multimap <lli,lli> mp;
        loop(i,0,n){
            lli temp;
            cin>>temp;
            mp.insert(pair<lli,lli>(temp,i));
        }
        lli start = mp.begin()->first;
        lli end = mp.rbegin()->first;
        cout<<start<<" "<<end<<endl;
        while (start!=end){
            auto i = mp.end();
            lli aj = i->first,ai;
            lli indexj=i->second;
            for ( ; i!=mp.begin(); i--){
                if(aj!=(i->first)){
                    lli ai= i->first;
                    break;
                }
            }
            lli indexi= i->second;
            cout<<indexi<<" "<<indexj<<endl;
            cout<<aj<<" "<<ai<<endl;
            lli n= ceil(float(ai)/float(aj));
            mp.erase(aj);
            mp.insert(pair<lli,lli>(n,indexi));
            lli start = mp.begin()->first;
            lli end = mp.rbegin()->first;
        }

        
    }
    return 0;
}