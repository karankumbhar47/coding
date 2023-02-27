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
#define all(vec) vec.begin(), vec.end()
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
        lli n,k;
        cin>>n>>k;
        vector <pair<lli,lli>> vec;
        loop(i,0,n){
            lli temp;
            cin>>temp;
            vec.push_back({temp,i});
        }
        sort(all(vec));
        lli a,b;
        lli sum = 0;
        loop(i,0,n){
            a=0;
            b=0;
            loop(j,i+1,n){
                if ( vec[i].first!=vec[j].first){
                    b++;
                    if(vec[i].second>vec[j].second){
                        a++;
                    } 
                }
            }
            sum += (k*a) + (k*(k-1)*b)/2;
            // cout<<a<<" "<<b<<" "<<sum<<" sum"<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}