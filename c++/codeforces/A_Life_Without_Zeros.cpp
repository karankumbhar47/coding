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

using  namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli a,b,h=0,flag=0;
    cin>>a>>b;
    while(a>0 or b>0 a ){
        if(flag==0){
            lli a1=a%10;
            lli b1=b%10;
            lli sum = a1+b1;
            // cout<<a1<<" "<<b1<<" "<<h<<endl;
            if(a1==0 and b1==0 and h==1 and a!=0 and b!=0){flag=1;}
            else if(a1==0 and b1==0 and h==0){flag=0;}
            else if(a1==0 or b1==0 and a!=0 and b!=0 ){flag=1;}
            (sum>=10) ? h = 1: h=0;
            a=a/10;
            b=b/10;
        }
        else{
            break;
        }
    }
    cout<<((flag==1) ? "NO\n" : "YES\n")<<endl;
    return 0;
}