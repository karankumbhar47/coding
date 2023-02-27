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
        lli n,k;
        cin>>n>>k;
        if(n==k && n==1){
            cout<<1<<endl;
        }
        else if(k<=1){
            cout<<-1<<endl;
        }
        else{
            lli diff = n-k+1;
            vector <lli> vec;
            for (lli i = 0; i < n; i++){
                vec.push_back(i+1);
            }
            rotate(vec.begin(), vec.begin()+vec.size()-diff, vec.end());
            for (lli i = 0; i < n; i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}