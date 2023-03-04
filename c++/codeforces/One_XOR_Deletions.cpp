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
        lli arr[n+1]={0};
        loop(i,0,n){
            lli temp;
            cin>>temp;
            arr[temp]++;
        }
        lli count=0;
        lli max=0;
        // printArr(arr,n+1);
        loop(i,0,n+1){
            if(i%2==0){
                count+=arr[i];
                // cout<<" if ..max"<<" "<<max<<" ";
                // cout<<"count"<<" "<<count<<endl;
            }
            else{
                count+=arr[i];
                if(max<count){
                    max=count;
                }
                // cout<<"else.. max"<<" "<<max<<" ";
                // cout<<"count"<<" "<<count<<endl;
                count=0;
            }
        }
        if(max<count){
            max=count;
        }
        // cout<<max<<" "<<n<<endl;
        cout<<(n-max)<<endl;
    }
    return 0;
}