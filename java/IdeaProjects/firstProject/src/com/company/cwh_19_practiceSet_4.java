package com.company;

import java.util.Scanner;

public class cwh_19_practiceSet_4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of testcases");
        int t = sc.nextInt();
        for (int i = 0 ;i<=t;i++ ) {
            //question 2
            //int m1,m2,m3;
            //m1 = sc.nextInt();
            //m2 = sc.nextInt();
            //m3 = sc.nextInt();
            //float overall = ((float) m1+m2+m3)/3;
            //System.out.println("your percentage is "+overall);
            //if(overall>=40 && m1>=33 && m2>=33 && m3>=33 ){
            //System.out.println("you passed");
            //}
            //else{
            //System.out.println("you failed ");
            //}

            // question 3
//        System.out.println("Enter your income ");
//        int income = sc.nextInt();
//        if(income<=250000){
//            System.out.println("You don't have to pay tax");
//        }
//        else if(income>250000 && income<=500000){
//            float tax = 0.05f*income;
//            System.out.println("1 :- Your income tax is "+tax);
//            System.out.println(tax);
//        }
//        else if(income>500000 && income<=1000000){
//            float tax = 0.05f*(500000-250000);
//            tax += 0.2f*(income-500000);
//            System.out.println("2 :- Your income tax is "+tax);
//        }
//        else if(income>1000000 ){
//            float tax = 0.05f*(500000-250000);
//            tax += 0.2f*(1000000-500000);
//            tax += 0.3f*(income-1000000);
//            System.out.println("3 :- Your income tax is "+tax);
//        }
//
//        //question 4
//        int num = sc.nextInt();
//        num %= 7 ;
//        switch (num){
//            case 1 -> System.out.println("Monday");
//            case 2 -> System.out.println("Tuesday");
//            case 3 -> System.out.println("Wednesday");
//            case 4 -> System.out.println("Thursday");
//            case 5 -> System.out.println("Friday");
//            case 6 -> System.out.println("Saturday");
//            case 0 -> System.out.println("Sunday");
//        }


//            // question 5
//            System.out.println("Enter the year");
//            int year = sc.nextInt();
//            if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
//                System.out.println("This is leap year");
//            } else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) {
//                System.out.println("This is not a leap year");
//            } else if (year % 4 == 0 && year % 100 != 0) {
//                System.out.println("This is a leap year");
//            } else {
//                System.out.println("This is not a leap year");
//            }


            //question 6
            System.out.println("Enter the url");
            String url = sc.nextLine();
            if(url.indexOf(".com")!=-1){
                System.out.println("This is commercial website");
            } else if (url.indexOf(".org")!=-1){
                System.out.println("This is an organisational website");
            } else if (url.indexOf(".in")!=-1) {
                System.out.println("This in an Indian website");
            } else{
                System.out.println("Invalid website");
            }
        }
    }
}
