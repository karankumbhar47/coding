package com.company;

import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeMap;

class MaxCapacityException extends Exception{
    @Override
    public String toString() {
        return "Input value can't be greater than 100000";
    }

    @Override
    public String getMessage() {
        return "Please Enter value less than 100000";
    }
}

class MaxOutputCapacityException extends Exception{
    @Override
    public String toString() {
        return "Input value can't be greater than 7000 as output will be large";
    }

    @Override
    public String getMessage() {
        return "Please Enter value less than 7000";
    }
}

class InvalidInputException extends Exception{
    public String toString(){
        return "This is not a valid input";
    }

    public String getMessage(){
        return "Please don't assign a as 9 and b as 8";
    }
}

class DivideByZeroException extends Exception{
    public String toString(){
        return "can't devide by zero to integer ";
    }

    public String getMessage(){
        return "Please change operator other than zero";
    }
}

class customCalculator{
    private int a;
    private int b;
    private String operator;
    customCalculator(int a,int b,String operator) throws  MaxCapacityException,InvalidInputException{
         if (a==9 || b==8) {
             throw new InvalidInputException();
         }
         else if(a<=100000 && b<=100000) {
             this.a = a;
             this.b = b;
             this.operator = operator;
             try {
                 calculate();
             }
             catch (Exception e){
                 System.out.println(e);
                 System.out.println(e.getMessage());
             }
         }
         else {
            throw new MaxCapacityException();
        }
    }

    public void calculate() throws MaxOutputCapacityException,DivideByZeroException{
        switch (operator){
            case "+" -> System.out.println("Addition of "+a+" and "+b+" is ==> "+(a+b));
            case "-" -> System.out.println("Subtraction of "+a+" and "+b+" is ==> "+(a-b));
            case "/" -> {
                if(b!=0) {
                    System.out.println("Division of " + a + " and " + b + " is ==> " + (a / (float) b));
                }
                else {
                    throw new DivideByZeroException();
                }
            }
            case "*" -> {
                if(a<=7000 & b<=7000) {
                    System.out.println("Multiplication of "+a+" and "+b+" is ==>"+(a*b));
                }
                else{
                    throw new MaxOutputCapacityException();
                }
            }
        }
    }
}

public class cwh_87_Exercise6_customCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        customCalculator c;
        while (true){
            System.out.println("Enter the value of a and b");
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println("Which operation :-");
            String s = sc.next();
            try {
                 c = new customCalculator(a,b,s);
            }
            catch (Exception e){
                System.out.println(e);
                System.out.println(e.getMessage());
            }
        }
    }
}
