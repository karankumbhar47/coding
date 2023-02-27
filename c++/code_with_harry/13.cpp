#include<iostream>

using  namespace std;

int main()
{
    //array
    int mark[4]={23,45,56,89};
    
    // cout<<mark[0]<<endl;
    // cout<<mark[1]<<endl;
    // cout<<mark[2]<<endl;
    // cout<<mark[3]<<endl;

    // int mathmarks[4];
    // mathmarks[0]=25;
    // mathmarks[1]=77;
    // mathmarks[2]=50;
    // mathmarks[3]=75;
    // mathmarks[2]=455;//--> you can change value

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // int marks[4];
    // for (int i = 0; i <= 3; i++)
    // {
    //     cout<<"enter the value of marks["<<i<<"]"<<endl;
    //     cin>>marks[i];
    // }
    // cout<<marks<<endl;//--> how to print array
    // cout<<&marks;//--> how to print array(use loop)


    //--> pointer airthematic
/*  address (new)=address(old)+(i*(size of datatype))
    p + i        = p +         (i * 4 bytes)
    one block of array takes specific bytes to store like here 
    4 bytes had taken to store one block 
*/
    int *p=mark;//--> this will store address of first block
    // cout<<"the address of mark[0] is "<<p<<endl;
    // cout<<"the address of mark[1] is "<<++p<<endl;
    // cout<<"the address of mark[2] is "<<++p<<endl;
    // cout<<"the address of mark[3] is "<<++p<<endl;
    // here value of p is increased by 3 so below program may shows wrong value
    // printing the value by pointer method
    cout<<"The value of mark[0] "<<*p<<endl;
    cout<<"The value of mark[1] "<<*(p++)<<endl;
    cout<<"The value of mark[2] "<<*(p++)<<endl;
    cout<<"The value of mark[3] "<<*(p++)<<endl;













    return 0;
}