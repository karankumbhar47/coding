package com.company;

import java.util.Arrays;
import java.util.Scanner;

//question 4
class MaxRetriesReached extends Exception{
    public String toString(){
        return "Reached maximum limit";
    }

    public String getMessage(){
        return "You only can enter 5 invalid indexes";
    }
}
public class cwh_86_practiceSet_14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter the value of a and b");
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = a/b;
        }
        catch (ArithmeticException ar){
            System.out.println("Ha.. Ha..");
            System.out.println("ArithmeticException");
        }
        catch (IllegalArgumentException ae){
            System.out.println("He.. He..");
            System.out.println("IllegalArgumentException");
        }
        catch (Exception e){
            System.out.println("any other error");
            System.out.println(e);
        }

        //question 2
//        int arrayName[] = {1,2,3,4,5};
//        int retries = 0;
//        boolean flag = true;
//        while (flag){
//            if(retries<5) {
//                try {
//                    System.out.println("Enter the index");
//                    int index = sc.nextInt();
//                    System.out.println(arrayName[index]);
//                } catch (Exception e) {
//                    System.out.println("Error . . .");
//                    System.out.println(e);
//                    retries++;
//                }
//            }
//            else{
//                try {
//                    throw new MaxRetriesReached();
//                }
//                catch (MaxRetriesReached m){
//                    System.out.println(m);
//                    System.out.println(m.getMessage());
//                    flag = false;
//                }
//            }
//        }

        //question 4
        try {
            maxRetries();
        }
        catch (Exception e){
            System.out.println(e);
            System.out.println(e.getMessage());
        }

    }

    public static void maxRetries() throws MaxRetriesReached{
        Scanner sc = new Scanner(System.in);
        int index;
        int arrayName[] = {1,2,3,4,5};
        int  retries = 0;
        boolean flag = true;
        while (flag){
            if(retries<5) {
                try {
                    System.out.println("Enter the index");
                    index = sc.nextInt();
                    System.out.println("Element of array at index "+index+" "+arrayName[index]);
                } catch (Exception e) {
                    System.out.println("Error . . .");
                    System.out.println(e);
                    retries++;
                }
            }
            else{
                throw new MaxRetriesReached();
            }
        }
    }
}
