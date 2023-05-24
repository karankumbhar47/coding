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

int fun(string s,int n, int m){
    if(n>1){
        loop(i,n){
            if(i+1<=n-1){
                if(s[i]!=s[i+1]){
                    lli len1= i-0;
                    lli len2= n-i-1;
                    m+=1;
                    if(i+2<n){
                        s = s.substr(0,len1) + s.substr(i+2,len2);
                    }
                    else{
                        s = s.substr(0,len1);   
                    }
                    return fun(s,n-2,m);
                }

            }
            else{
                return m;
            }
            if(i==n-1){
                return m;
            }
        }
    }
    else{
        return m;
    }
    return m;
}

int main()
{
    lli t;
    cin>>t;
    while(t--){
        lli n,m=0;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s<<" "<<n<<" "<<i<<" "<<endl;
        m  = fun(s,n,m);
        }
        if(m%2==0){
            cout<<"Ramos"<<endl;
        }
        else{
            cout<<"Zlatan"<<endl;
        }
        
    return 0;
    }
