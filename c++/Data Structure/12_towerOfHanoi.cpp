#include<iostream>

using  namespace std;

//here n is the number of disks should be transfer from source to destination using intermediate
//here A is the source(we are giving name to the tower A,B,C as intger 1,2,3 respectively)
//here C is the destination
//here B is intermidiate as we are using it if needed
void TOH(int n, int A, int B, int C){
    if (n>0){
        TOH(n-1,A,C,B);
        cout<<"from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}

int main()
{
    TOH(3,1,2,3);
    return 0;
}