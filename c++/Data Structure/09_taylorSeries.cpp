#include<iostream>
#include "D:\coding\C++\Data Structure\05_powerRecurrsion.cpp"
// #include<05_powerUsingRecursion.cpp>

using  namespace std;

double taylorE(int x, int n){
    static double p=x;
    static double f=1;
    double r;
    if (n==0){
        return 1;
    }
    else{
        r = taylorE(x,n-1);
        p = p*x;
        f = f*n;
        return r + (p/f);
    }
}

double e(int x,int n){  //output is not printing while n==100000
    static double i = 1;
    double r;
    if (n==0){
        return i;
    }
    else{
        i = 1 + (x*(i/n));
        return e(x,n-1);
   }
}

double eLoop(int x,int n){
    // double i;
    double r=1;
    for( ; n>0; n--){
        // cout<<n<<endl;
        r = 1+(x*(r/n));//here we have to get division as double so don't divide x/n as it will give integer.We can replace it by given equation.
    }
    return r;
}
                                                                         
int main()
{
    cout<<e(1,100);
    return 0;
}
