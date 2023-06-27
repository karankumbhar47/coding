package com.company;

import java.util.Scanner;
import java.util.Arrays;

interface Interface1{
    void method1();
    void method2();
    private void method5(){
        System.out.println("This is private method of Interface1");
    }
    default void  method6(){
        System.out.println("This is default method of Interface1");
        method5();
    }
}

interface Interface2 extends Interface1{
    // to not repeat this functions again we need
    // to inherit interface1
    void method1(int a);
//    void method2();
    void method3();
    void method4();
    default void method6(){
        System.out.println("Overriding method6 of interface1 in interface2");
    }

    default void method7(){
        System.out.println("this is method 7 in Interface 2");
    }
}

class MyChildren implements Interface2{
    @Override
     public void method1(int a) {
        return;
    }

    @Override
    public void method1(){
        System.out.println("This is method 1 in class MyChildren");
    }
    @Override
    public void method2(){
        System.out.println("This is method 2 in class MyChildren");
    }
    @Override
    public void method3(){
        System.out.println("This is method 3 in class MyChildren");
    }
    @Override
    public void method4(){
        System.out.println("This is method 4 in class MyChildren");
    }
}

abstract class Children1 implements Interface1{
    //nothing
}



public class cwh_58_interfaceInheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        MyChildren child = new MyChildren();
//        child.method1();
//        child.method2();
//        child.method3();
//        child.method4();
        child.method6();
//        child.method7();

        // we can create object of abstract class like this
        Children1  in = new Children1(){
            @Override
            public void method1() {
                System.out.println("overriding method1");
            }

            @Override
            public void method2() {
                System.out.println("overriding method2");
            }
        };
        // we can create object of interface like this
        Interface1 in1 = new Interface1() {
            @Override
            public void method1() {
                System.out.println("overriding method1");
            }

            @Override
            public void method2() {
                System.out.println("overriding method2");
            }
        };
    }
}
