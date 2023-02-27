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
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        if(n%2==1){
            cout<<(-1)<<endl;
        }
        else{
            lli o = 3;
            lli e = -1;
            lli arr[n]={0};
            for(lli i=2; i<n; i+=2){
                arr[i] = o;
                o+=2;
            }
            for(lli i=1; i<n; i+=2){
                arr[i] = e;
                e-=2;
            }
            printArr(arr,n);
            cout<<endl;
            // lli s=0;
            // lli end =n-1;
            // lli pi=arr[s];
            // lli si=arr[end];
            // for(lli i=1;i<n;i++){
            //     if(i%2==0){
            //         if(pi>si){
            //             cout<<i<<" "<<pi<<" "<<si<<endl;
            //             break;
            //         }
            //     }
            //     else{
            //         if(pi<si){
            //             cout<<i<<" "<<pi<<" "<<si<<endl;
            //             break;
            //         }
            //     }
            //     end--;
            //     s++;
            //     pi+=arr[s];
            //     si+=arr[end];
            //     cout<<"inloop.."<<pi<<" "<<si<<" "<<i<<endl;
            // }
        }
    }
    return 0;
}