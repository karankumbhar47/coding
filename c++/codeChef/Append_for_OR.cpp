#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
#include<string>
#include<cmath>

#define lli long long int
#define loop(i, n) for (lli i = 0; i < n; i++)
#define arrIn(arr,n) loop(i,n){cin>>arr[i];}
#define ll long long

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n,y,ans=0;
        cin>>n>>y;
        lli arr[n];
        loop(i,n){
            cin>>arr[i];
            ans= (ans|arr[i]);
        }
        lli sum =0,flag=0;
        string binaryAns = bitset<21>(ans).to_string();
        string binaryY = bitset<21>(y).to_string();
        // cout<<binaryAns<<" "<<binaryY<<endl;
        // for (lli i = 20; i >=0; i--)
        // {
        //     cout<<binaryAns[i]<<" ";
        // }
        // cout<<endl;
        // for (lli i = 20; i >=0; i--)
        // {
        //     cout<<binaryY[i]<<" ";
        // }
        // cout<<endl;
        
        for (lli i = 20; i >=0 ; i--)
        {
            // cout<<i<<endl;
            if (binaryAns[i]=='1' && binaryY[i]=='1'){
                sum+=0;
            }
            else if(binaryAns[i]=='0' && binaryY[i]=='0'){
                sum+=0;
            }
            else if(binaryAns[i]=='0' && binaryY[i]=='1'){
                sum+=pow(2,20-i);
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<(-1)<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}