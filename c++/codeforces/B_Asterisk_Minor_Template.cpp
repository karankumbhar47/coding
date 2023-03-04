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
        string a,b;
        cin>>a;
        cin>>b;
        vector <string> st;
        for (lli i = 0; i < a.length(); i++)
        {
            string s="";
            for (lli j = 0; j < b.length(); j++)
            {
                
                if(a[i]==b[j]){
                    s+=a[i];
                }
                else{
                    if(s.length()==1){
                        lli flag=0;
                        if(a[0]==s[0] && s[0]==b[0]){
                            cout<<s[0]<<'*'<<endl;
                            flag=1;
                            break;
                        }
                        else if(a[-1]==s[0] && b[-1]==s[0]){
                            cout<<'*'<<s[0]<<endl;
                            flag=1;
                            break;
                        }
                    else{
                        cout<<'*'<<s<<'*'<<endl;
                        break;
                    }
                    }
                }
            }
            
        }
        
        
    }
    return 0;
}