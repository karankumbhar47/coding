#include<iostream>
#include<math.h>
#include <string.h>
using  namespace std;

class calculater{
    protected:
        double a,b,result;
    public:
        calculater(){}
        calculater(int a1,int b1,char o){
            setvalue(a1,b1);
            process(o);
            display();
        }
        void setvalue(int a1,int b1){
            a=a1;
            b=b1;
        }
        void process(char operators){
             if (operators=='+'){
                result=(a+b);
             }
             else if (operators=='-'){
                result=(a-b);
             }
             else if (operators=='*'){
                result=(a*b);
             }
             else if (operators=='/'){
                result=(a/b);
             }
                    }
        void display(){
            cout<<"ans :- "<<result<<endl;
        }
              
};


class scientificCalculater :public calculater{
    public:
        scientificCalculater(int a1,string o,int b1 =1){
            setvalue(a1,b1);
            process(o);
            display();
        } 

        void process(string operators){
        if (operators=="pow"){
            result=pow(a,b);
            }
        else if (operators=="sqrt"){
            result=sqrt(a);
            }
        else if (operators=="log"){
            result= log10(a);
            }
        else if (operators=="ln"){
            result=log(a);
            }
                    }
    };



int main()
{
    double a1, b1;
    string o;
    cin>>a1>>o>>b1;
    scientificCalculater c1(a1,o,b1);
    return 0;
}