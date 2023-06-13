package com.company;

import java.util.Arrays;
import java.util.Scanner;




public class cwh_33_varArgs {
    static int sum(float a,int ...arrayName){
       //we have int [] arrayName
        int result = 0;
        for(int e: arrayName){
            result += e;
        }
        return result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(sum(1,2));
        System.out.println(sum(4));
        System.out.println(sum(1,2,3));
        System.out.println(sum(1,2,3,4));
        System.out.println(sum(1,2,3,4,5));

    }
}
