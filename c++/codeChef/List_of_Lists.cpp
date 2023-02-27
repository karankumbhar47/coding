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
        lli arr[n];
        arrIn(arr,n);
        sort(arr,arr+n);
        lli count=0, max=0, privious = arr[0];
        loop(i,n){
            if(privious==arr[i]){
                count++;
            }
            else{
                privious==arr[i];
                if(count>max){
                    max = count;
                }
                count=1;
            }
        }
        if(count>max){
            max = count;
        }
        cts("max")ctl(max)
        if(max==n){
            ctl(0)
        }
        else if(max==1){
            ctl(-1);
        }
        else{
            ctl((n-max)+1)
        }
    }
    return 0;
}