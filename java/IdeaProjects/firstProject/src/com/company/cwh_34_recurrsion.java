package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class cwh_34_recurrsion {
    static int factorial(int n){
        if(n==1 || n==0){
            return  1;
        }
        else{
            return n*factorial(n-1);
        }
    }

    static int factorialIterative(int n){
        int product = 1;
        for(int i = 1; i<=n; i++){
            product *= i;
        }
        return product;
    }

    static int fibonacci(int n){
        if(n==1 || n==2){
            return n-1;
        }
        else {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
    static int[] fibonacciIterative(int n){
        int []arr = new int[n];
        for (int i=1; i<=n; i++){
            if(i==1 || i==2){
                arr[i-1]=i-1;
            }
            else{
                arr[i-1] = arr[i - 2] + arr[i - 3];
            }
        }
        return arr;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        System.out.println(factorial(0));
//        System.out.println(factorial(1));
//        System.out.println(factorialIterative(2));
//        System.out.println(factorialIterative(3));
//        System.out.println(factorialIterative(0));
        System.out.println(Arrays.toString(fibonacciIterative(1)));
        System.out.println(Arrays.toString(fibonacciIterative(2)));
        System.out.println(Arrays.toString(fibonacciIterative(3)));
        System.out.println(Arrays.toString(fibonacciIterative(4)));
        System.out.println(Arrays.toString(fibonacciIterative(5)));
    }
}
