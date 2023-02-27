#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<bitset>
#include<algorithm>

// #define lli long long int
// #define ll long long

// using  namespace std;

// int main()
// {
//     // string s="100000";
//     // for (int j = 0; j < 20; j++)
//     // {
//     //     co
//     // }
//     // cout<<pow(2,4);
//     vector <int> v ={1,2,3,4,5};
//     vector <int> :: iterator it = v.begin();
//     cout<<*it<<endl;
//     return 0;
// }


#include<iostream>

using  namespace std;

void swap(int *a,int *b){
    int *temp = a;
    a = b;
    b = temp;
}

int main()
{
    map <int,vector<int>> mp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mp[i].push_back(j);
        }
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" : ";
        for(auto value:it->second){
            cout<<value<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}