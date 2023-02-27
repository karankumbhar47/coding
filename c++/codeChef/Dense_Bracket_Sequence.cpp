#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define lli long long int
#define loop(i, n) for (lli i = 0; i < n; i++)
#define arrIn(arr, n)  loop(i, n){cin >> arr[i]; }
#define ll long long
#define printArr(arr,n) loop(i,n){cout<<arr[i]<<" ";}
#define ctl(k) cout<<k<<endl;
#define cts(k) cout<<k<<" ";

using namespace std;

int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        int arr[n];
        loop(i, n){
            char temp;
            cin >> temp;
            if(temp==')') arr[i]=1;
            else arr[i]=(-1);
        }
        lli i = 0, j = n - 1, remove = 0,fi,fj;
        int left, right;
        left = arr[i];
        right = arr[j];

        // while (i < j){
        //     lli pi=i,pj=j;
        //     while (left != -1 && i<j){
        //         remove++;
        //         i++;
        //         left=arr[i];
        //     }
        //     while (right != 1 && j>i){
        //         remove++;
        //         j--;
        //         right=arr[j];
        //     }   
        //     fi=i;
        //     fj=j;
        //     if(i<j && left+right==0){
        //         i++;
        //         j--;
        //         left = arr[i];
        //         right = arr[j];
        //     }
        //     else{
        //         break;
        //     }

        // }
        // if((fj-fi)>1){
        //     ctl(remove+fj-fi-1);
        // }
        // else{
        //     ctl(remove);
        // }
        cout<<abs(accumulate(arr,arr+n,remove))<<endl;
    }
    return 0;
}