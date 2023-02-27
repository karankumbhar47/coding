#include<iostream>

using  namespace std;
/*  loop types
    1)for loop
    2)while loop
    3)do while loop
    */ 
int main()
{
    // int i=1; -
    /* sytax for for loop
    for(intial, finalization/condition , updation)
    {
        loop body
    }
    */
    // for (int i = 0; i<=40; i++)
    // {
    //     cout<<i<<endl;
    // }
    // // infinite for loop
    //  for (int i = 0; 34<=40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //while loop
    // while(condition){
    //     code body
    // }
    int i=0;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // //infinite while loop
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    //do while
    // sytax 
    // do
    // {
    //     code body
    // } while (condition);
    do
    {
        cout<<i<<endl;
        i++;// --> the difference between while and do while is condition is check before execution in while loop and in dowhile loop condition is checked after execution 
    } while (i<=40);
    
    

















    return 0;
}