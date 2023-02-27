#include<iostream>

using  namespace std;


class Demo{
    private:
        int a,b,c;
//         void setdata(int a1,int b1,int c1){
//             a=a1;
//             b=b1;            --> this throws an error i don't know why?
//             c=c1;
// }
    public:
        int d=7,e=9;
        void setdata(int a,int b, int c); //--> we can write our function inside class as well as outside
        void getdata(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
        }
};

void Demo::setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Demo karan;
    // karan.a=9 --> we can't set private variable directly
    karan.d=70;
    karan.e=90;
    karan.setdata(2,3,4); 
    karan.getdata(); 
    return 0;   
}
