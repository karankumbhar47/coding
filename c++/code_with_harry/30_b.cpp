#include<iostream>
#include<math.h>
using  namespace std;

class point{
    int x,y;
    public:
    friend float distance(point, point);

        point(int a, int b){
            x=a;
            y=b;
        }
        void Display(void){
            cout<<"The point is :- ("<<x<<" , "<<y<<")"<<endl;

        }

};


//create a function to find distance between two point
float distance(point p, point q){
    float distance= sqrt(((p.x-q.x)*(p.x-q.x))+((p.y-q.y)*(p.y-q.y)));
    return distance;
}


int main()
{
    point p(1,1),q(1,1);
    p.Display();
    q.Display();
    cout<<distance(p,q);
    return 0;
}