package com.company;

import java.util.Scanner;

public class cwh_21_Loop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = 1;
        // while loop
        while (i<1000){
            System.out.println(i);
            i++;
        }
        System.out.println("=====================================");

        //do while loop
        do{
            System.out.println(i);
            i--;
        }while (i>0);
        System.out.println("=====================================");

        //for loop
        int n = sc.nextInt();
        for(i=n; i>0; i--){
            System.out.println(i);
            if (i==3) {
                System.out.println("breaking ...");
                break;
            }
            else if(i==7){
                System.out.println("Above continue");
                continue;//below continue will not execute it will redirect to next iteration
                        // it will skip below code
            }
            System.out.println("Countinuing loop...");
        }
        System.out.println("=====================================");


    }
}
