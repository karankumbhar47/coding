#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<bitset>
#include<cmath>
#include<numeric>
#include<algorithm>
#include<limits>

#define lli long long int
#define ll long long
#define loop(i,start,end) for (lli i = start; i < end; i++)
#define rloop(i, n) for (lli i = n-1; i >= 0; i--)
#define arrIn(arr,n) loop(i,0,n){cin>>arr[i];}
#define cts(k) cout<<k<<" ";
#define ctl(k) cout<<k<<endl;
#define all(vec) vec.begin(),vec.end();
#define printArr(arr,n) loop(i,0,n){cts(arr[i]);}cout<<endl;
#define printPair(vec) loop(i,0,vec.size()){cts(vec[i].first);ctl(vec[i].second);}

using  namespace std;

void swap(int* a, int* b){
    //  use the function like swap(&num1 , &num2)
    int temp = *a;    
    *a = *b;
    *b = temp;
}




void bubbleSort(int array[],int length){
    // use the function like bubbleSort(arrayName,arrayLength)
    bool flag = false;
    while (!flag){
        flag = true;
        loop(i,0,length-1){
            if(array[i]>array[i+1]){
                flag = false;
                swap(&array[i],&array[i+1]);
                printArr(array,7);
            }
        }
    }
}


void selectionSort(int array[],int length){
    loop(i,0,length-1){
        int min = array[i];
        int minIndex = i;
        loop(j,i+1,length){
            if(min>array[j]){
                min = array[j];
                minIndex = j;
            }
        }
        swap(&array[i],&array[minIndex]);
    }
}


int main()
{
    int array[7] = {34,78,5,1,50,76,32};
    selectionSort(array,7);
    printArr(array,7);
    
}