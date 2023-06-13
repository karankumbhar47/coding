package com.company;

import java.util.Scanner;


class A{
    protected void method1(){
        System.out.println("this is method1 of class A");
    }

     private void method2(){
        System.out.println("This is method2 of class A");
    }

}

class B extends A{
        @Override
        protected void method1(){
        System.out.println("This is method2 of class B");
    }
}

public class cw48_methodOverWriting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        B b = new B();
        b.method1();

    }
}
