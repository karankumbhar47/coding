#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

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
        lli x,y;
        cin>>x>>y;
        cout<<(pow(x,2)-pow(y,2))<<endl;
        cout<<(y-x)<<endl;
    }
    return 0;
}