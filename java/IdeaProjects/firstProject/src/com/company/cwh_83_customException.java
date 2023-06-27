package com.company;

import java.util.Scanner;
import java.util.Arrays;

class customException extends Exception{
    @Override
    public String toString(){
        return "This is custom Exception";
    }

    @Override
    public String getMessage() {
        return super.getMessage() + "This is getMessage ";
    }

}


public class cwh_83_customException {
    public static void main(String[] args) throws RuntimeException {
        Scanner sc = new Scanner(System.in);
        byte a = sc.nextByte();
        if(a>10){
            try {

                //nested try
                try {
                    //we can't throw two errors at a time otherwise downside code inside this try\
                    //block is unreachable
                    //throw new ArithmeticException("This is nested try block Arithmetic Exception");
                    System.out.println("Inside nested try block");
                    System.out.println("Reenter value of a");
                    a = sc.nextByte();
                    System.out.println("trying first time...");
                    throw new customException();
                    //this area is unreachable(code below throw statement and inside try block)
                }
                catch (Exception e){
                    System.out.println("Catching first time...");
                    System.out.println(e);
                }

                System.out.println("I am trying...");
                throw new RuntimeException();

            } catch (RuntimeException e) {
                System.out.println("Catching...");
                System.out.println(e);
                System.out.println(e.getMessage());
                System.out.println(e.toString());
            }

        }

        else{
            System.out.println("This is less than 10");
            try {
                customFunction(a);
            }
            catch (Exception e){
                System.out.println(e);
                throw new RuntimeException("This is runtime exception");
            }
        }
    }

    public static void customFunction(byte a) throws customException{
        //here no need to handle exception
        if(a<10){
            throw new customException();
        }
        else{
            System.out.println("smaller than 10");
        }

    }

}
