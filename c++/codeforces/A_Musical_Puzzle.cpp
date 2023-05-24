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
#define vloop(value,vec) for (auto& value : vec )
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
        string s;
        cin>>s;
        lli counter=0;
        vector <string> allStr;
        loop(i,0,n-1){
            string test = s.substr(i,2);
            // cout<<"test "<<test<<endl;
            int flag=0;
            vector<string>::iterator iter = allStr.begin();
            for (iter;iter<allStr.end(); iter++ ){
                // cout<<"value "<<(*iter)<<endl;
                if((*iter)==test){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                allStr.push_back(test);
                counter+=1;
            }

        }
        cout<<counter<<endl;
    }
    return 0;
}