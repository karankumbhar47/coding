#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <cmath>
#include <numeric>
#include <algorithm>

#define lli long long int
#define ll long long
#define loop(i, start, end) for (lli i = start; i < end; i++)
#define rloop(i, n) for (lli i = n - 1; i >= 0; i--)
#define arrIn(arr, n)  \
    loop(i, 0, n)      \
    {                  \
        cin >> arr[i]; \
    }
#define cts(k) cout << k << " ";
#define ctl(k) cout << k << endl;
#define printArr(arr, n) \
    loop(i, 0, n)        \
    {                    \
        cts(arr[i]);     \
    }
#define printPair(vec)      \
    loop(i, 0, vec.size())  \
    {                       \
        cts(vec[i].first);  \
        ctl(vec[i].second); \
    }
#define all(vec) vec.begin(), vec.end()

using namespace std;

bool comparater(pair<lli, lli> p1, pair<lli, lli> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

void findNumbers(vector<int> &ar, int sum,vector<vector<int>> &res, vector<int> &r,int i){
    if (sum == 0){
        res.push_back(r);
        return;
    }

    while (i < ar.size() && sum - ar[i] >= 0){
        r.push_back(ar[i]); 

        findNumbers(ar, sum - ar[i], res, r, i);
        i++;

        r.pop_back();
    }
}

// Returns all combinations
// of ar[] that have given
// sum.
vector<vector<int>> combinationSum(vector<int> &ar,int sum){
    sort(ar.begin(), ar.end());

    ar.erase(unique(ar.begin(), ar.end()), ar.end());

    vector<int> r;
    vector<vector<int>> res;
    findNumbers(ar, sum, res, r, 0);

    return res;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // lli t;
    // cin >> t;
    // while (t--)
    // {
    //     lli n, w;
    //     cin >> n >> w;
    //     vector<pair<lli, lli>> vec;
    //     loop(i, 0, n)
    //     {
    //         lli temp1, temp2, temp3;
    //         cin >> temp1 >> temp2 >> temp3;
    //         vec.push_back({temp1 * temp2, temp3});
    //     }
    //     sort(vec.begin(), vec.end());
    //     lli points = 0;
    //     rloop(i, n)
    //     {
    //         if (w - vec[i].second >= 0)
    //         {
    //             w -= vec[i].second;
    //             points += vec[i].first;
    //         }
    //         if (w == 0)
    //         {
    //             break;
    //         }
    //     }
    //     ctl(points)
    // }
    vector<int> ar;
    ar.push_back(2);
    ar.push_back(4);
    ar.push_back(6);
    ar.push_back(8);
    int n = ar.size();
 
    int sum = 8;
    vector<vector<int> > res = combinationSum(ar, sum);
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << ")";
        }
    }
    return 0;
}