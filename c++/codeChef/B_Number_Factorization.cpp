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

void printMap(map<lli,lli> &m){
    cout<<"Printing map ..."<<endl;
    for (auto i = m.begin(); i !=m.end(); i++)
    {
        cout<< i->first<<" "<< i->second<<endl;
    }
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
        map <lli,lli> mp,mp1;
        lli m=n+1,qn=1,c=2;
        while(n>1){
            if(n%c==0){
                if(mp[c]==0){ qn *=c;}
                mp[c]++;
                n/=c;
            }
            else {
                if(mp[c]<m) {m=mp[c];}
                c++;
            }
        }
        n = qn;
        lli low =m;
        cout<<m<<" "<<n<<endl;
        while(low>0 || n>1){
            cout<<"new loop ...."<<endl;
            mp1[n]=m;
            printMap(mp);
            printMap(mp1);
            cout<<low<<" low"<<endl;
            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                if(i->second!=-1){
                    (i->second)-=low;
                    if(i->second==0){
                        cout<<"c "<<i->first;
                        n=n/(i->first);
                        i->second = -1;
                        cout<<" "<<n<<endl;
                    }
                    else if(i->second<m){
                        m = i->second;
                    }
                }
            }
            if(m==low){
                break;
            }
            else{
                low = m;
            }
        }
        printMap(mp1);
        lli sum =0;
        for (auto i = mp1.begin(); i != mp1.end(); i++)
        {
            sum = i->first*i->second;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}