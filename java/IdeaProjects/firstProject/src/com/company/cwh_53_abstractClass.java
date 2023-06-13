package com.company;

import java.util.Scanner;
import java.util.Arrays;

abstract class Parent{
    public Parent(){
        System.out.println("This is constructor of parent class");
        method2();
    }
    public void  method(){
        System.out.println("This is method of parent class");
        method2();
    }

    void overrideMethod(){
        System.out.println("This is override method of Parent");
    }

    abstract public void method2();
}

class Children extends Parent{
    public Children(){
        System.out.println("This is constructor of class Children");
    }

    @Override
    void overrideMethod(){
        System.out.println("This is override method of class children");
    }

    public void method2(){
        System.out.println("overriding method of class parent which is abstract");
    }
}

abstract class Children2 extends Parent{
    public Children2(){
        System.out.println("Constructor of class Children2");
    }
    //here we will not override method2 of parent
    //class then we need to declare this class as
    //abstract
}

public class cwh_53_abstractClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //abstract class will help to make other classes
        //as we can say it is standard class to make other
        //classes which may be abstract or not

        //to make class real or not abstract we need to
        //override all abstract method of parent class
        //then only it will be real class or we can make it's
        //objects

        //opposite of abstract is concrete
        //Parent p = new Parent(); 'Parent' is abstract; cannot be instantiated

        //so t
//        Children c = new Children();

        // here we can create super abstract class as reference
        // and concrete non-abstract subclass as object
        Parent p = new Children();//this is allowed
        System.out.println();
//        p.method2();
        p.method();
        p.overrideMethod();

    }
}
