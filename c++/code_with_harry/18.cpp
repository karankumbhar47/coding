#include<iostream>

using  namespace std;

int fact(int a){
    if(a<=1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int fib(int a){
    if(a<=2){
        return 1;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
}


// i don't no how to take list output
// int fib(int a){
//     static int length=a;
//     int l[length];
//     if(a<=2){
//         l[a]= 1;
//     }
//     else{
//         l[a]= fib(a-1)+fib(a-2);
//     }
//     return l;
// }

int main()
{
    int a;
    cout<<"Enter value of a :- "<<endl;
    cin>>a;
    cout<<"Value of factorial of "<<a<<"is :- "<<fact(a)<<endl;


    cout<<"Fibbonacci series of "<<a<<" element is :- ";
    for (int i = 1; i <= a; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    return 0;
}