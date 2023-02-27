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

int get(struct array a, int index){
    if (index>=0 && index<a.length) return a.arr[index];
    return -1;
}

void set(struct array *p, int element, int index){
    if(index>=0 && index<p->length) p->arr[index]=element;
}

int maxUnsorted(struct array a){
    int max = a.arr[0];
    for (int i = 0; i < a.length; i++)
    {
        if (max<a.arr[i]) max= a.arr[i];
    }
    return max;
}

int minUnsorted(struct array a){
    int min = a.arr[0];
    for (int i = 0; i < a.length; i++)
    {
        if (min>a.arr[i]) min= a.arr[i];
    }
    return min;
}

int sumArray(struct array a){
    int sum = 0; 
    for (int  i = 0; i < a.length; i++) sum+=a.arr[i];
    return sum;
}

int recurrsiveSumArray(struct array *p,int lastIndex){
    if(lastIndex<0) { 
        return 0;
    }
    else {
        return (recurrsiveSumArray(&(*p),lastIndex-1) + (p->arr[lastIndex]));
    }
}

float average(struct array a){
    return (float )sumArray(a)/a.length;
}

int main()
{
    struct array a={ 7, 8, {1,2,3,4,5,6,7} };
    display(&a);
    // cout<<get(&a,5)<<endl;
    // set(&a,5,5);
    // cout<<"min "<<minUnsorted(&a)<<endl;
    // cout<<"max "<<maxUnsorted(&a)<<endl;
    // cout<<"sum "<<sumArray(&a)<<endl;
    // cout<<"recurssiveSum "<<recurrsiveSumArray(&a,a.length-1)<<endl;
    cout<<"averange "<<average(&a)<<endl;
    display(&a);

    return 0;
}