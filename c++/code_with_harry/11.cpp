#include<iostream>

using  namespace std;

int main()
{
    for (int i = 0; i<=40; i++)
    {
        // cout<<i<<endl;
        if (i==5){
            break;}
        else if (i==2){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
