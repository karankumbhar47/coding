#include<iostream>

using  namespace std;

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

//deleteing element
int del(struct array *p,int index){
    int delElement = p->arr[index];
    if(index<p->length){
        int i=index;
        while (i<p->length-1)
        {
            p->arr[i]=p->arr[i+1];
            i++;
        }
        p->arr[i]=0;
        p->length-=1;
        return delElement;
    }
    else{
        cout<<"Please give correct index"<<endl;
        return -1;
    }

}

int main()
{
    struct array a={ 6, 8, {1,2,3,4,5,6} };
    
    //delete
    display(&a);
    cout<<del(&a,2)<<endl;
    display(&a);
    return 0;
}


//error array amigeous
//soulution is just remove <bits/stdc++.h> library