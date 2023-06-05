package com.company;

import  java.util.Scanner;

public class cwc_05_takingInput {
    public static void main(String [] args){
        Scanner scannerObject = new Scanner(System.in); // creating object of scanner class to take input
//        System.out.println("taking input from user");
//
//        System.out.println("Enter a new number 1");
//        byte a = scannerObject.nextByte();
//        System.out.println("Enter a new number 2");
//        byte b = scannerObject.nextByte();
//        int sum = a + b;
//        System.out.println("sum of two numbers "+ sum);
//
//        //checking whether input is int or not
//        System.out.println("Enter the third number");
//        boolean b1 = scannerObject.hasNextInt();
//        System.out.println("Input is integer ==> "+ b1);

        System.out.println("taking input string");
        System.out.println("Enter your name");
//        String name = scannerObject.next(); // read only a word
//        System.out.println("your name is : "+ name);
        System.out.println("Enter your full name");
        String fullName = scannerObject.nextLine(); // read complete line
        System.out.println("your full name is : "+fullName);
    }
}
