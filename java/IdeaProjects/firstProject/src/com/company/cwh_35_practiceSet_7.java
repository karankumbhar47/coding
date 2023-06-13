package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class cwh_35_practiceSet_7 {
    static void table(int n){
        for(int i=1; i<=10; i++){
            System.out.println(n+" x "+i+" = "+(n*i));
        }
    }

    static void pattern(int n){
        for(int i = 1; i<=n; i++){
            System.out.println("*".repeat(i));
        }
    }

    static int sumNatural(int n){
        if(n==1){
            return n;
        }
        else {
            return n+sumNatural(n-1);
        }
    }

    static void patternReverse(int n){
        for(int i=n; i>=1; i--){
            System.out.println("*".repeat(i));
        }
    }


    static float average(int ...arrayName){
        int sum = 0;
        int n = arrayName.length;
        for (int j : arrayName) {
            sum += j;
        }
        return (float) sum /n;
    }

    static void patternRecursion(int n){
        if(n==1){
            System.out.println("*");
        }
        else{
            System.out.println("*".repeat(n));
            patternRecursion(n-1);
        }
    }

    static void patternReverseRecursion(int n) {
        if (n == 1) {
            System.out.println("*".repeat(1));
        } else {
            patternReverseRecursion(n - 1);
            System.out.println("*".repeat(n));
        }
    }

    static float tempConversion(int n){
        return (n *(9/5.0f)) + 32;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of n :-");
        int n = sc.nextInt();
        /*
        //question 1
        table(n);
        //question 2
        pattern(n);
        //question 3
        System.out.println(sumNatural(n));
        //question 4
        patternReverse(n);
        //question 6
        System.out.println(average(1,2,3,4));
        //question 7
        patternRecursion(n);
        //question 8
        patternReverseRecursion(n);
         */
        //question 9
        System.out.println(tempConversion(n));

    }
}
