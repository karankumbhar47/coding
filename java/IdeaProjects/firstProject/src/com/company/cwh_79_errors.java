package com.company;

import java.util.Scanner;
import java.util.Arrays;

public class cwh_79_errors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        a = sc.nextByte();
        //throws an ArithmeticException when a =0;
        //or throws an InputMismatchException when a exceed byte range
        System.out.println(1000/a);
    }
}
