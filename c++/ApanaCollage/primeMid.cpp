#include<iostream>
#include<cmath>

using  namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a ; i<=b ; i++)
    {
        bool t=true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if((i%j)==0){
                t=false;
                break;
            }
        }
        if (t){
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}