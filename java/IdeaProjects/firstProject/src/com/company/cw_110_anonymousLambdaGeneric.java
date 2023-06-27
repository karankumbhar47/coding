package com.company;

import java.util.Scanner;

@FunctionalInterface
interface DemoInterface{
    int display(int a);
    // we can't write second method as this is functional interface
//    void displayMethod();
}

class ActualClass implements DemoInterface{

    @Deprecated
    public ActualClass(){
        System.out.println("This is deprecated constructor of class ActualClass");
    }

    @Deprecated
    public void deprecatedMethod(){
        System.out.println("This is deprecated method of class ActualClass");
    }

    @Override
    public int display(int a){
        System.out.println("This is display method defining inside class");
        return a;
    }

}

//for class mention above class
//all methods inside class will follow this
@SuppressWarnings("deprecation")
public class cw_110_anonymousLambdaGeneric {

    //don't give any warning regarding deprecated method
    //for method mention above method
//    @SuppressWarnings(value = "deprecation")
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ActualClass ac = new ActualClass();
        ac.display(4);
        ac.deprecatedMethod();

        //anonymous way to define interface or abstract class
        //no need to make a separate class for that
        //no need to implements it's method any other class and make a object
        //instead define here only
        DemoInterface df = new DemoInterface() {
            @Override
            public int display(int a) {
                System.out.println("Overriding method display of interface DemoInterface");
                System.out.println("Without making class");
                System.out.println();
                return a;
            }
        };
        df.display(5);

       //lambda expression used for functional interface
        //define only one method
        DemoInterface df2 = (a)->{
            System.out.println("Overriding method of interface inside lambda expression ");
            return a;
        };
        df2.display(4);

    }
}
