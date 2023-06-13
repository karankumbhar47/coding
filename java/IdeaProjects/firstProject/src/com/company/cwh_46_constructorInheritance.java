package com.company;

import java.util.Scanner;

class base{
    public base(){
        System.out.println("I am constructor of base");
    }
    public base(int a){
        System.out.println("I am overloaded constructor of base "+a);
    }
    public base(int a, int b){
        System.out.println("I am overloaded constructor of base "+a+" "+b);
    }
}

class derived extends base{
    public derived(){
        super(8);
//        super(5,6);wrong
        System.out.println("I am constructor of derived");
    }
    public derived(int a){
        super(5,6);
        System.out.println("I am overloaded constructor of derived "+a);
    }
    public derived(int a, int b){
        System.out.println("I am overloaded constructor of derived "+a+" "+b);
    }

}

class childOfDerived extends derived{
    childOfDerived(){
        System.out.println("constructor of childOfDerived");
    }
    childOfDerived(int a){
        super(1,2);
        System.out.println("overloaded constructor of childOfDerived");
    }
}




public class cwh_46_constructorInheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        base b = new base(3);
//        derived d = new derived();
//        derived d1 = new derived(5);
//        derived d2 = new derived(8,6);
        childOfDerived cd = new childOfDerived(1);
    }
}
