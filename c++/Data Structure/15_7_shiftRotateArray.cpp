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

void leftShift(struct array *p,int shiftNumber){
    int i,j;
    for (i = shiftNumber,j=0; i < p->length-1,j<p->length; i++ , j++) p->arr[j] = p->arr[i];
    for( ; i < p->length; i++) p->arr[i]=0; 
}

void rightShift(struct array *p,int shiftNumber){
    int i,j;
    for (i = p->length-shiftNumber-1,j=p->length-1; i >=0; i-- , j--) cout<<"i "<<i<<" j "<<j<<endl; p->arr[j] = p->arr[i];
    cout<<i<<" "<<j<<endl;
    for( ; j >=0; j--) p->arr[j]=0; 
}

void leftRotate(struct array *p){
    int temp = p->arr[0];
    for (int i = 0; i < p->length-1; i++)    p->arr[i]=p->arr[i+1];
    p->arr[p->length-1] = temp;
}

void rightRotate(struct array *p){
    int temp = p->arr[p->length-1];
    for (int i = p->length-1; i > 0; i--)    p->arr[i]=p->arr[i-1];
    p->arr[0] = temp;
}

int main()
{
    struct array a={ 7, 8, {1,2,3,4,5,6,7} };
    display(&a);
    // leftShift(&a,2);
    // rightShift(&a,2);
    rightRotate(&a);
    rightRotate(&a);
    rightRotate(&a);
    display(&a);
    leftRotate(&a);
    leftRotate(&a);
    leftRotate(&a);
    display(&a);

    return 0;
}