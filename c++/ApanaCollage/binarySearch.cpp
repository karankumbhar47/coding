#include<iostream>

using  namespace std;

void bin(arr[],int a){
    arr[n].sort();
    s=0;
    e=n;
    m=(s+e)/2;
    while(m<n){
        if(arr[m]==a){
            cout<<'Y';
            return 1;
        } 
    }
    return 0;
}


int main()
{
    int n,a;
    cin>>n>>a;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin<<arr[i];
    }
    if (bin(arr[n],a)){
        cout<<'Y';
    }
    else{
        cout<<'N';
    }
    return 0;
}