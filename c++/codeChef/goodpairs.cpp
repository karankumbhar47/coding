#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        ll a;
        vector<ll> v1;
        vector<ll> v2;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            v1.push_back(a);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            v2.push_back(a);
        }
        map<pair<ll, ll>, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cout<<m[{v1[i],v2[i]}]<<" m"<<endl;
            c += m[{v1[i], v2[i]}];
            cout<<c<<" c"<<endl;
            m[{v2[i], v1[i]}]++;
        }
        // for(auto value: m){
        //     cout<<
        // }
        cout << c << endl;
    }
    return 0;
}