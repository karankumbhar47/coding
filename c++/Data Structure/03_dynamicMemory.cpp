#include<iostream>
#include<stdlib.h>

using  namespace std;

int main()
{
    int *p;
    int *p1;
    // p = (int *)malloc(sizeof(int));
    // p1 = new int[5];
    cout<<p<<endl;
    cout<<p1<<endl;
    delete []p1; //this will delete the memory in heap
    delete p;

    p1 =NULL;
    cout<<p1<<endl;
    return 0;
}