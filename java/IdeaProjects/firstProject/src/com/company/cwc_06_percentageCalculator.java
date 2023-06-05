package com.company;

import java.util.Scanner;

public class cwc_06_percentageCalculator {
    public static void main(String [] args){
        Scanner scannerObject = new Scanner(System.in);
        System.out.println("taking marks as your input :-");
        System.out.println("Enter your marks in Physics :-");
        int marks1 = scannerObject.nextInt();
        System.out.println("Enter your marks in Chemistry :-");
        int marks2 = scannerObject.nextInt();
        System.out.println("Enter your marks in Math :-");
        int marks3 = scannerObject.nextInt();
        System.out.println("Enter your marks in Social Science :-");
        int marks4 = scannerObject.nextInt();
        System.out.println("Enter your marks in Englist :-");
        int marks5 = scannerObject.nextInt();

        int percentage = (marks1+marks2+marks3+marks4+marks5)*100;
        float percent = percentage/500;
        System.out.println("Your total percentage is :-" + percent +"%");
    }
}
