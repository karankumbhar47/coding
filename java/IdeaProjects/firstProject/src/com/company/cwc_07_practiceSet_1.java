package com.company;
import java.util.Arrays;
import  java.util.Scanner;

public class cwc_07_practiceSet_1 {
   public static void main(String [] args) {
      System.out.println("taking input from user...");
      Scanner sc = new Scanner(System.in);
      System.out.println("Num 1...");
      int num1 = sc.nextInt();
      System.out.println("Num 2...");
      float num2 = sc.nextFloat();
      boolean num3 = sc.hasNextFloat();
      System.out.println("Num1 :- " + num1);
      System.out.println("Num2 :- " + num2);
      System.out.println("Num3 is float :- " + num3);
      System.out.println("Converting the kilometers to miles :- \nEnter the kilometers :- ");
      float kilometer = sc.nextFloat();
      float mile = kilometer * 0.6213f;
      System.out.println(kilometer+ " km = "+mile+" miles");


   }
}
