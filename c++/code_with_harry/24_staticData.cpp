#include<iostream>

using  namespace std;

class Employee{
    int Id;
    // int countér=0;-->this is separate for each object
    static int counter;//--> all object shared this counter
                        // --> we have to write this ouside the class also
    // static int counter=1;--> don't why it is incorrect?
//                          --> sytax error
public:
    void setData(void){
        cout<<"Enter your Id number :-";
        cin>>Id;
    }
    void getData(void){
        counter++;
        cout<<"Your Id number is "<<Id<<". This is Employee number "<<counter<<endl;;
        
    }

    static void getCount(void){
        /*this function is only access static variable of 
        class. We can access this function by class name directly */
        // cout<<Id;//--> this throws an error as it is not static variable
        cout<<"Value of counter is :- "<<counter<<endl;
    }
    
};

int Employee:: counter;//default value is 0
// int Employee:: counter=1;//we can also set value of counter

int main()
{
    Employee karan, vinayak,rohan;
    karan.setData();  
    karan.getData();  
    Employee::getCount();

    vinayak.setData();  
    vinayak.getData(); 
    Employee::getCount();

    rohan.setData();  
    rohan.getData(); 
    Employee::getCount();
    return 0;
}