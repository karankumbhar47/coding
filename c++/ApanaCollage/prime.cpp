#include<iostream>
#include<cmath>
using  namespace std;

int main()
{
    int n;
    cin>>n;
    string t="P";
    for(int i=2; i<=sqrt(n) ; i++ ){
        if ((n%i)==0){
            t="NP";
            break;
        }

    }
    cout<<t;
    return 0;
}