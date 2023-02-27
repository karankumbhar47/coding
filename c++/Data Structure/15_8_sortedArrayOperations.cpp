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

void insertEleInSortedArr(struct array *p,int element){
    int i = p->length-1; 
    if (p->length==p->size) return;
    while (p->arr[i]>element){
        // cout<<i<<endl;
        p->arr[i+1] = p->arr[i];
        i--;
    }
    p->arr[i+1] = element;
    p->length++;
}

bool checkSorted(struct array *p){
    int i=0;
    while(i<p->length-1){
        if(p->arr[i]>p->arr[i+1]) return false;
        i++;
    }
    return true;
}

void seperateNegFromPos(struct array *p){
    int i=0, j=p->length-1;
    while (i<j)
    {
        while(p->arr[i]<0) i++;
        while(p->arr[j]>0) j--;
        if(i<j){
            swap(&(p->arr[i]),&(p->arr[j]));
        }
    }
    
}

int main()
{
    struct array a={ 5, 8, {1,-2,0,4,-5} };
    display(&a);
    // insertEleInSortedArr(&a,3);
    // display(&a);
    // cout<<a.length<<endl;
    // insertEleInSortedArr(&a,6);
    // display(&a);
    // cout<<a.length<<endl;
    // insertEleInSortedArr(&a,6);
    // display(&a);
    // cout<<a.length<<endl;
    // insertEleInSortedArr(&a,1);
    // display(&a);
    // cout<<a.length<<endl;
    // cout<<checkSorted(&a)<<endl;
    seperateNegFromPos(&a);
    display(&a);
    return 0;
}