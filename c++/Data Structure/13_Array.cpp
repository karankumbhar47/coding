#include<iostream>

using  namespace std;


int main()
{
    //declaring and initializing
    int array[5];
    for(int i=0; i<5; i++) cout<<array[i]<<" ";
    cout<<endl;
    int arr[5] = {1,2,3};
    for(int i=0; i<5; i++) cout<<arr[i]<<" ";
    for(int i=0; i<5; i++) cout<< &arr[i]<<" ";
    cout<<endl;
    int arr1[] = {3,4,5};
    for(int i=0; i< 3; i++) cout<<arr1[i]<<" ";
    for(int i=0; i< 3 ; i++) cout<< &arr1[i] <<" ";
    cout<<endl;

    //accessing
    cout<<arr[2]<<" "<<2[arr]<<" "<<*(arr+2);
    return 0;

}