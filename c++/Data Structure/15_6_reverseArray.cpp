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

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

void reverse(struct array *p){
    int arrCopy[p->length];
    for (int i = p->length-1, j=0; i >=0, j<p->length; i--,j++) arrCopy[j] = p->arr[i];   
    for (int i = 0; i < p->length; i++) p->arr[i]=arrCopy[i];
}

void reverseSwap(struct array *p){
    int i=0;
    int j=p->length-1;
    while (i<j)  swap(&(p->arr[i++]),&(p->arr[j--]));
}

int main()
{
    struct array a={ 4, 8, {1,2,3,4} };
    display(&a);
    // reverse(&a);
    reverseSwap(&a);
    display(&a);

    return 0;
}