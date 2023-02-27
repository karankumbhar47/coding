#include<iostream>
#include<string>
using  namespace std;

int fact(int n){
    if((n==1) or (n==0)){
        return 1;
    }
    else{
        return (fact(n-1)*n);
    }
}

int comb(int n,int r){
    int k=(fact(n))/((fact(n-r))*fact(r));
    return k;
}

void pascal(int n){
    int spaces=(2*n)+1;
    for (int i = 0; i < n; i++){
    cout<<string(spaces,' ');
    {
        for (int j = 0; j <=i ; j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
        spaces-=1;
    }    
}
}
int main()
{
    int m;
    cin>>m;
    pascal(m);
    return 0;
}