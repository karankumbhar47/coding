#include <iostream>

// class--> no memory

using namespace std;

class shop
{
private:
    int counter=0;
    static int n;
    int itemId[n], itemPrice[n];

public: 
    void data(void);
    void getId(void);
    void setPrice(void);
    void displayPrice(void);
    void initCounter(void){counter=1;}
    };

void shop::data(void){
    cout<<"Please Enter the total number of items "<<endl;
    int a1;
    cin>>a1;
    // int itemId[n], itemPrice[n];
    initCounter();
    for (int i = 0; i < n; i++)
    {
        getId();
    }
    
}

void shop::getId(){
    cout<<"Please Enter the Id of item "<<endl;
    cin>>itemId[counter];
    setPrice();
}

void shop::setPrice(){
    cout<<"Please Enter the price of item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Price of item "<<itemId[i]<<" is :- "<<itemPrice[i]<<endl; 
    }
    
};

int shop::n;
int main()
{
    shop kalpana;
    kalpana.data();
    kalpana.displayPrice();
    return 0;
}