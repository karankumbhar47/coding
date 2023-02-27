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

struct array * mergeSortedArray(struct array *p1,struct array *p2){
    struct array *p3 = new struct array;
    *p3 = { p1->length + p2->length,p1->size};
    int k=0,i,j;
    for (i=0,j=0; i<p1->length && j<p2->length; ){
        if (p1->arr[i] <= p2->arr[j]) p3->arr[k++] = p1->arr[i++];
        else p3->arr[k++] = p2->arr[j++];
    }
    for( ; i<p1->length; i++) p3->arr[k++]=p1->arr[i];
    for( ; j<p2->length; j++) p3->arr[k++]=p2->arr[j];
    return p3;
}

// void mergeSortedArray(struct array *p1,struct array *p2,struct array *p3){
//     p3->length = p1->length + p2->length;
//     p3->size = p1->size;
//     int k=0,i,j;
//     for (i=0,j=0; i<p1->length && j<p2->length; ){
//         if (p1->arr[i] <= p2->arr[j]) p3->arr[k++] = p1->arr[i++];
//         else p3->arr[k++] = p2->arr[j++];
//     }
//     for( ; i<p1->length; ) p3->arr[k++]=p1->arr[i++];
//     for( ; j<p2->length; ) p3->arr[k++]=p2->arr[j++];
// }

int main()
{
    struct array a={ 4, 8, {1,3,5,7} };
    struct array b={ 4, 8, {2,4,6,8} };
    display(&a);
    display(&b);
    struct array c;
    // mergeSortedArray(&a,&b,&c);
    struct array *p;
    p = mergeSortedArray(&a,&b);
    display(&(*p));

    return 0;
}