package com.company;

import java.util.Arrays;
import java.util.Scanner;

class NegativeRadiusException extends Exception{
    public String toString(){
        return "Radius cannot be negative!!";
    }

    public String getMessage(){
        return "Enter a valid positive radius";
    }

}
public class cwh_84_throwThrows {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        try {
            System.out.println(area(a));
        }
        catch (Exception e){
            System.out.println(e);
            System.out.println(e.toString());
            System.out.println(e.getMessage());
        }
        try {
            System.out.println(divide(a,b));
        }
        catch (Exception e){
            System.out.println(e);
            System.out.println(e.getMessage());
            System.out.println(e.getCause());
        }

    }

    public static double area(int r) throws NegativeRadiusException{
        if(r<0){
            throw new NegativeRadiusException();
        }
        else {
            return Math.PI * r * r;
        }
    }

    public static float divide(int a , int b) throws ArithmeticException{
        return a/b;
    }
}
