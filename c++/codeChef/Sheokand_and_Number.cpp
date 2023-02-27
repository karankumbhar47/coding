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
        lli n;
        cin>>n;
        lli x = log2(n);
        
        lli y = log2(n-pow(2,x));
        lli rem;
        if (y==x){
            rem =  pow(2,x)+pow(2,y+1)-n;
        }
        else if(y+1==x){
            rem = n-pow(2,y)-pow(2,x);
        }
        else{
            rem = min(n-pow(2,y)-pow(2,x),pow(2,x)+pow(2,y+1)-n);
        }
        if (pow(2,x)==n)
        {
            ctl(1)
        }
        else{
            ctl(rem)
        }
    }
    return 0;
}