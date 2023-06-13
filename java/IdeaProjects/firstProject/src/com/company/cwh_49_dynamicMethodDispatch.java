package com.company;

import org.w3c.dom.ls.LSOutput;

import java.util.Scanner;
import java.util.Arrays;

class phone{
    public phone(){
        System.out.println("This is parent class constructor");
        System.out.println("This is parent old phone");
    }
    public void method2(){
        System.out.println("This is phone class method");
    }
    void on(){
        System.out.println("Turning on Phone ... ");
    }
}

class SmartPhone extends phone{
    public SmartPhone(){
        System.out.println("This is child class constructor");
        System.out.println("This is child new smartphone");
    }

    public void method1(){
        System.out.println("This is smartPhone class method");
    }
    void on(){
        System.out.println("Turning on SmartPhone ... ");
    }
}

public class cwh_49_dynamicMethodDispatch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        phone ph = new phone();
//        SmartPhone smPh = new SmartPhone();
        /*
        phone ph ==> represent the reference what we can call it(all properties of
                    this class can be used excluded method which was overriding by
                    child class)
        new phone() ==> represent actual object only method can call which is
                    also present in parent class and override by child class
        here we can say phone having company smartPhone
        but smartPhone  can't have company phone
        Super obj = new Sub();
         */
        phone ph = new SmartPhone();

        ph.method2();
        ph.on();
//        ph.method1();
        /*
        reference ==> superClass ==> phone ==> phone ph
        object  ==> subClass ==> SmartPhone  ==> new SmartPhone
        This is allowed
         */


    }
}
