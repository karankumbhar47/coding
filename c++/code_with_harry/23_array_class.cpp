#include<iostream>

using  namespace std;



class Employee{
private:
    int Id;
    int salary=1000;
public:
    void getId(void);
    void displayData(void);
};

void Employee::getId(void){
    cout<<"Please Enter the Id. number :- ";
    cin>>Id;
}

void Employee::displayData(void){
    cout<<"Your Id number is "<<Id<<" having salary "<<salary<<" per month"<<endl;
}

int main()
{
    Employee list[4];
    for(int i=0; i<4; i++){
        list[i].getId();
        list[i].displayData();
    }
    return 0;
}