#include<iostream>

using  namespace std;

// void swap(int *i,int *j);
void transpositionLinSearch(struct array *p, int i);

struct array{
    int length;
    int size;
    int arr[10];
};

void display(struct array *p){
    cout<<"Elements are ..."<<endl;
    for (int i = 0; i < p->length; i++){
        cout<<(p->arr[i])<<" ";
    }
    cout<<endl;
}

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j=temp;
    }

void transposition(struct array *p,int i){
    if(i>0) {
        cout<<i<<endl;
        swap(&((*p).arr[i]),&((*p).arr[i-1]));
    }
} 

void moveToFront(struct array  *p,int i){
    if(i>0) swap(&(p->arr[i]),&(p->arr[0]));
}

int linSearch(struct array *p,int key){
    for (int i = 0; i < p->length; i++)
    {
        if (p->arr[i]==key) {
            // transposition(&(*p),i);
            moveToFront(&(*p),i); 
            return i;
        }
    }
    return -1;
}


int main()
{
    struct array a={ 4, 8, {1,2,3,4} };
    display(&a);
    cout<<linSearch(&a,4)<<endl;
    display(&a);
    cout<<linSearch(&a,4)<<endl;
    display(&a);
    cout<<linSearch(&a,4)<<endl;
    display(&a);
    cout<<linSearch(&a,3)<<endl;
    display(&a);
    cout<<linSearch(&a,3)<<endl;
    display(&a);
    return 0;
}