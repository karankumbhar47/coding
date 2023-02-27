#include<iostream>

using namespace std;

class  Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth);
    int area();
    void changeLength(int l);
    int getLength(){return length;};
    int perimeter();
    ~Rectangle();
};

Rectangle:: Rectangle(int l,int b)
{
    length = l;
    breadth = b;
};

int Rectangle:: area(){
    return length*breadth;
};

void Rectangle:: changeLength(int l){
    length = l;
};

int Rectangle:: perimeter(){
    int p = 2*(length + breadth);
    return p;
}
 Rectangle::~ Rectangle(){}


int main(){
    Rectangle r(10,2);
    cout<<r.area()<<endl;
    cout<<r.getLength()<<endl;
    r.changeLength(30);
    cout<<r.perimeter()<<endl;
    cout<<r.getLength()<<endl;
    r.~Rectangle();
}