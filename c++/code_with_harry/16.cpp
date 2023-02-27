#include<iostream>

using  namespace std;
int sum(int a, int b){
    int c =a-b;
    return c;
}

// void swap(int a, int b){  --> it is not swaping values because only 
//     int temp=a;                  values of a and b is swaping which are not actual variable
//     a=b;                         actual values are x and y
//     b=temp;
// }

// call by reference(as we are copying file from anothrer source and edit it. it will edit
void swapPointer(int *a, int *b){    // in only your pc not in your source. but while we are sharing file in google drive and edit it. it will dit in both pc)
    int temp=*a;
    *a=*b;       
    *b=temp;
}


// call by reference using c++ reference variable
void swapPointerReference(int &a, int &b){    
    int temp=a;
    a=b;       
    b=temp;
}

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    swap(x,y);//--> this will not swap values
    cout<<x <<endl<<y<<endl;
    cout<<"Sum of two number is "<<sum(x,y)<<endl;

    swapPointer(&x,&y);
    cout<<x <<endl<<y<<endl;
    cout<<"Sum of two number is "<<sum(x,y)<<endl;

    swapPointerReference(x,y);
    cout<<x <<endl<<y<<endl;
    cout<<"Sum of two number is "<<sum(x,y)<<endl;

    return 0;
}