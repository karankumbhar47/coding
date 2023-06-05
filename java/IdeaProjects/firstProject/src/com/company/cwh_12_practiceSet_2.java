package com.company;

import java.util.Scanner;

public class cwh_12_practiceSet_2 {
    public static void main(String[] args) {
        // problem1
        float f1 = 7/4*9/2;//wrong result
        float f2 = 7/4f*9/2;//correct result
        float f3 = 7/4*9/2f;//wrong result
        float f4 = 7/4f*9/2f;//correct result
        float f5 = 7f/4*9f/2;//correct result
        System.out.println(f1);
        System.out.println(f2);
        System.out.println(f3);
        System.out.println(f4);
        System.out.println(f5);

        //problem2
        char originalGrade = 'B';
        System.out.println("original grade :- "+originalGrade);
        char encryptGrade = (char)(originalGrade+8);
        System.out.println("encrypted grade :- "+encryptGrade);
        char decryptGrade = (char)(encryptGrade-8);
        System.out.println("decrypted grade :- "+decryptGrade);

        //problem3
        int givenNum = 5;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number :- ");
        int inputNum = sc.nextInt();
        System.out.println("Given integer is larger than Input Number :- "+(givenNum>inputNum));

        //problem
        int v = 10;
        int u = 5;
        int s = 2;
        int a = 2;
        float exp = (v*v-u*u)/(2*a*s);//wrong result
        System.out.println(exp);
        exp = (v*v-u*u)/(2f*a*s);//correct result
        System.out.println(exp);

        // or change all number types to float
        float V = 10;
        float U = 5;
        float S = 2;
        float A = 2;
        float EXP = (V*V-U*U)/(2*A*S);
        System.out.println(EXP);
    }
}
