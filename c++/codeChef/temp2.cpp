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
#define loop(i, n) for (lli i = 0; i < n; i++)
#define arrIn(arr,n) loop(i,n){cin>>arr[i];}
#define cts(k) cout<<k<<" ";
#define ctl(k) cout<<k<<endl;
#define printArr(arr,n) loop(i,n){cts(arr[i]);}
#define printPair(vec) loop(i,vec.size()){cts(vec[i].first);ctl(vec[i].second);}

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n,m;
        cin>>n;
        lli arr[n];
        arrIn(arr,n);
        lli min = 30000;
        loop(i,n){
            if(i==0){
                lli diff2 = abs(arr[i+1]-arr[i]);
                if(diff2<min){
                    min = diff2;
                }
            }
            else if(i==n-1){
                lli diff1 = abs(arr[i-1]-arr[i]);
                if(diff1<min){
                    min = diff1;
                }
            }
            else{
                lli diff1 = abs(arr[i-1]-arr[i]);
                lli diff2 = abs(arr[i+1]-arr[i]);
                m = max(diff1,diff2);
                if(m<min){
                    min = m;
                }
            }
        }
        cout<<min<<endl;
        
    }
    return 0;
}