#include<iostream>

 using  namespace std;
// /* structure is user defined data type use to 
//    combine didderent type of data type*/
// typedef struct employee //--> typedef is used to short name of struct
// {
//     int id;//4 bytes memory
//     int salary;//4 bytes memory
//     char favo_chr;//1 bytes memory// total memory of struct is 9 bytes
// }whatever_i_want;


// union money//--> sharing memory in all
// {
//     // we can set only one value of among three data
//     // so it is perfect for program which wants 1 data at a time
//     // we can set one value at a time
//     // so it is using maximum of 4 byte memory in below program
//     // which is les  than abve struct program 
//     //overwrite privious memory while using next mmemory

//     int rice;
//     char car;   // --> here typedef is 
//     float pounds;
// };
int main()
{
    //struct
    // whatever_i_want karan;
    // whatever_i_want vinayak;
    // whatever_i_want soham;
    // karan.salary=2323;
    // karan.id=12140860;
    // karan.favo_chr='k';

    // soham.salary=659848;
    // soham.id=12140844;
    // soham.favo_chr='s';

    // cout<<"value of id "<<karan.id<<endl;
    // cout<<"value of salary "<<karan.salary<<endl;
    // cout<<"value of favo_chr "<<karan.favo_chr<<endl;
    
    // union money m;
    // m.rice=53454;
    // cout<<m.rice<<endl;
    // m.car='k';
    // cout<<m.rice<<endl;
    // cout<<m.car<<endl;
    // m.pounds=534.54;
    // cout<<m.rice<<endl;
    // cout<<m.car<<endl;
    // cout<<m.pounds<<endl;

    //enum
    enum meal{berakfast, lunch, dinner};
    cout<<berakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<"****************************************************"<<endl; 
    // meal m1=dinner;
    // cout<<m1<<endl;
    meal m2=berakfast;
    cout<<m2<<endl;//--> why last one is only printing?
    meal m1=dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;//--> why last one is only printing?

    cout<<"****************************************************"<<endl; 
    cout<<0<<(m2==0)<<endl;
    cout<<1<<(m2==1)<<endl;
    cout<<2<<(m2==2)<<endl;
    



    return 0;
}
//sturcture not ableto hide data, anyone can access memory
//structure mai function nahi dal sakate