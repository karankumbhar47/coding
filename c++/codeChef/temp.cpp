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
        if(n<50){
            lli diff = 50 - n;
            if(diff%2==0){
               m = diff/2; 
            }
            else{
                m = diff/2 +3;
            }
        } 
        else{
            lli diff= n - 50;
            if(diff%3==0){
                m = diff/3 ;
            }
            else if(diff%3==1){
                m = diff/3 + 2;
            }
            else{
                m = diff/3 + 4;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}