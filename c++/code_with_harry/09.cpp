/*c++ control structure
1)sequence structer
2)selection structer
3)loop structer
              if-else
              if else ladder
              case switch
*/

#include<iostream>

using  namespace std;

int main()
{
    int age;
    cout<<"tell me your age ";
    cin>>age;
//     //else if ladder
//     if ((age <18) && (age>0)){
//         cout<<"You canot come to party\n";
//     }
//     else if (age==18){
//         cout<<"please wait till your birthday\n";
//     }
//     else if (age<1){
//         cout<<"you aren't born\n";
//     }
//     else{
//         cout<<"you can come to party\n";
//     }


        //switch(selection control cse)
        switch (age)
        {
        case 22:
            cout<<"your age is 22\n";
            break;
        case 18:
            cout<<"your age is 18\n";
            break;
        case 23:
            cout<<"your age is 23\n";
            break;
        default:
        cout<<"no special case\n";
            break;
        }

    


    return 0;
}