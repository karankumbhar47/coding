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
    lli c = pow(10,9) + 7;
    lli l = 2 * pow(10,5) +1;
    lli factorial[l]={1,1};
    loop(i,2,l){
        factorial[i] = (i * factorial[i-1])%c;
    }
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        lli s=0,d=0;
        loop(i,0,n){
            if(a[i]==b[i]){
                s++;
            }
        }
        lli ans;
        d = n - s;
        if(d%2==0){
            ans = pow(2,s)* (factorial[d]/(factorial[d/2]*factorial[d/2]));
            ans = ans%c;
        }
        else{
            ans = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}