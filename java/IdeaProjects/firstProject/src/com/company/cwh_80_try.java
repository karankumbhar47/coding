package com.company;

import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.Arrays;

public class cwh_80_try {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        try {
            a = sc.nextInt();
            System.out.println(1000/a);
        }
        catch (ArithmeticException at){
            System.out.println(at);
            try {
                a = sc.nextInt();
                System.out.println("try at level 2");
            }
            catch (Exception e){
                System.out.println("Exception at level 2");
            }
        }
        catch (InputMismatchException mm){
            System.out.println("This id inputMismatchException ");
            System.out.println(mm);
        }
        catch (Exception actualException){
            System.out.println("Any other error");
            System.out.println(actualException);
            //this will print at last only
//            actualException.printStackTrace();
//            System.out.println(actualException.getCause());
//            System.out.println(actualException.getMessage());
//            System.out.println(actualException.getSuppressed().toString());
//            System.out.println(actualException.toString());
            System.out.println(actualException.initCause(actualException.getCause()));
            System.out.println(actualException.getStackTrace());
        }
    }
}
