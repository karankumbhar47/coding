#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#define lli long long int
#define ll long long

using  namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli arr[n];
        for (lli i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        lli c=0,flag=0;
        lli p = arr[0];
        for (lli i = 0; i < n; i++){
            if (arr[i]==p){
                c+=1;
            }
            else{
                p=arr[i];
                if(c>=3){
                    break;
                    flag=1;
                }
                c=1;
            }
        }
        if (flag==1){
            cout<<"NO"<<endl;
        }
        else{
            if (c>=2){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                lli i=0;
                for ( ; i < n; i+=2){
                    cout<<arr[i]<<" ";
                }

                // cout<<endl<<i<<" i"<<endl;
                lli j;
                if(i==n+1){
                    j=n-2;
                }
                else{
                    j=n-1;
                }
                // cout<<endl<<j<<" j"<<endl;

                for (; j >=1; j-=2){
                    cout<<arr[j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}