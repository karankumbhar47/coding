#include<iostream>

using  namespace std;

struct array{
    int length;
    int size;
    int arr[10];
};

void display(struct array *p){
    for (int i = 0; i < p->length; i++){
        cout<<(p->arr[i])<<" ";
    }
    cout<<endl;
}

int binarySearch(struct array a,int key){
    int l=0,h=a.length-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(key==a.arr[mid]){ 
            return mid;
        }
        else if(key>a.arr[mid]){
            l=mid+1;  
        } 
        else{
            h=mid-1;
        }
    }
    return -1;
}

int recurrsiveBinarySearch(int arr[],int key,int l,int h){
    if (l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key) {
            return recurrsiveBinarySearch(arr,key,l,mid-1);
        }
        else {
            return recurrsiveBinarySearch(arr,key,mid+1,h);
        }
    }
    return -1; 
}

int main()
{
    struct array a={ 10, 10, {1,2,3,4,5,6,7,8,9,10} };
    display(&a);
    cout<<recurrsiveBinarySearch(a.arr,12 ,0,9)<<endl;
    // cout<<binarySearch(a,11)<<endl;
    display(&a);

    return 0;
}