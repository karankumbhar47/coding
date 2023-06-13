package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class cwh_31_Method {
    static void greet(){
        System.out.println("good morning bro");
    }
    //method overloading can't be performed by changing return type like we can't
    // make static int greet();
    static void greet(String name){
        System.out.println("good morning bro "+name);
    }

    //here name1 and name2 are parameters
    static  void  greet(String name1, String name2){
        System.out.println("good morning "+name1+" and "+name2);
    }
    void greeting(){
        System.out.println("Good Morning");
    }

    static int add(int a, int b){
        return a+b;
    }
    //if we didn't write static here then we can call this method only when
    //we created class object

    //static means shared by all objects
    static void shared(int num){
       int num1 = num;
    }
    static void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
    static void swapArray(int []array,int index1, int index2){
       int temp = array[index1];
       array[index1] = array[index2];
       array[index2] = temp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = add(a,b);
        System.out.println(c);

        int []array = {1,5,3,6,2,1,6,6};
        int d = add(array[0],array[1]);
        System.out.println(d);

        System.out.println(Arrays.toString(array));
        //here we are not passing address
        //here we are passing values

        swap(array[0],array[1]);

        System.out.println(Arrays.toString(array));
        //but here we are sending address
        swapArray(array,0,3);
        System.out.println(Arrays.toString(array));

        cwh_31_Method obj;
        obj = new cwh_31_Method();
        obj.greeting() ;

        cwh_31_Method obj1 = new cwh_31_Method();
        obj1.greeting();

        //Method overloading
        greet();
        //here "karan" is argument
        // arguments are actual values
        greet("karan");
        greet("karan","harry");

    }
}
