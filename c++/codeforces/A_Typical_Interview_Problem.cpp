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

bool fun(lli index,string s,lli length){
    string ans="FBFFBFFB";
    for(lli i=0;i<length;i++){
        if(s[i]!=ans[index%8]){
            return false;
        }
        index++;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        string s;
        cin>>s;
        lli flag=0;
        if(s[0]=='F'){
            lli startIndex[5]={0,2,3,5,6};
            for(lli i=0; i<5; i++){
                if(fun(i,s,n)){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
        else{
            lli startIndex[3]={1,4,7};
            for(lli i=0; i<3; i++){
                if(fun(i,s,n)){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;;9369
}