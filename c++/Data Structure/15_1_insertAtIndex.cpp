#include<iostream>

using  namespace std;

struct array{
    int length;
    int size;
    int arr[10];
};

 
void display(struct array *p){
    cout<<"Elements are ..."<<endl;
    for (int i = 0; i < p->length; i++)
    {
        cout<<(p->arr[i])<<" ";
    }
    cout<<endl;
}

void append(struct array *p,int element){
    if(p->length<p->size){
        p->arr[p->length++]=element;
    }
    else{
        cout<<"Your array size is full";
    }
}

void append2(struct array *p,int element){
    insert(&(*p),element,p->length);
}


int main()
{
    struct array a={4,8,{1,2,3,4}};
    
    //Insert
    display(&a);
    insert(&a,-22,-5);
    display(&a);

    //Append
    // display(&a);
    // append2(&a,5);
    // display(&a);
    // cout<<a.length<<endl;
    // cout<<a.size<<endl;
    

    return 0;
}