#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define lli long long int
#define ll long long

using namespace std;

// struct person
// {
//     int parent;
//     int totalChildren;
//     vector<int> children;
// };

// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
// {
//     return (a.second < b.second);
// }

int main()
{
    lli T;
    cin >> T;
    while (T--)
    {
        lli n;
        cin >> n;
        lli arr[n];
        // lli children[n];
        for (lli i = 0; i < n; i++){
            cin >> arr[i];
            // children[i] = -1;
        }
        sort(arr, arr + n);
        
        lli j=1,i=0,c=0,t=0;
        while (i<n){
            // cout<<i<<" "<<'i'<<endl;
            if (arr[i]!=0){
                lli p = j;
                while (j<p+arr[i] && j<n){
                    // children[j]=arr[i];
                    j++;
                }   
                if (j!=(p+arr[i])){
                    lli diff = arr[i]+p - j;
                    if (diff==c){
                        t+=1;
                        c=0;
                        break;
                    }
                    else if(diff>c){
                        break;
                    }
                    else{
                        c=c-diff;
                        t+=1;
                        i++;
                    }
                }
                else{
                    t+=1;
                    i++;
                }
            }
            else if(arr[i]==0){
                c+=1;
                t+=1;
                i++;
                j++;
            }
            else if(c!=0){
                if (arr[i]==c){
                        t+=1;
                        c=0;
                        break;
                    }
                    else if(arr[i]>c){
                        break;
                    }
                    else{
                        c=c-arr[i];
                        t+=1;
                        i++;
                    }
            }
            
            
        }
        cout<<t<<endl;
        // vector<pair<int,int>> family;
        // for (lli i = 0; i < n; i++){
        //     lli temp;
        //     cin >>temp;
        //     family.push_back(make_pair(-1,temp));
        // }

        // sort(family.begin(),family.end(),sortbysec);

        // for (lli i = 0; i < n; i++){
        //     cout<<family[i].second<<" ";
        // }
        // cout<<endl;

        // for (lli i = 0; i < n; i++){
        //     for (lli j = i+1; j < i+1+family[i].first && j<n; j++){
        //         family[j].first = family[i].second;
        //         // if (j==n-1){
        //         //     break;
        //         // }
        //     }
        // }

        // for (lli i = 0; i < n; i++){
        //     cout<<family[i].first<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}