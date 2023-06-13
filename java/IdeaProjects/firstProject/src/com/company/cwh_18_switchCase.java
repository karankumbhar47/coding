package com.company;

public class cwh_18_switchCase {
    public static void main(String[] args) {
        int age = 44;
        switch (age){
            case 18:
                System.out.println("your age is less than 18");
                break;
            case 54:
                System.out.println("your are proud");
                break;
            case 45:
                System.out.println("your are of nearly 45");
                break;
            case 44:
                System.out.println("your of 44");
            default:
                System.out.println("Invalid age");
        }

        //Enhanced switch
        switch (age){
            case 18 -> System.out.println("age is 18");
            case 12 -> System.out.println("age is 12");
            case 17 -> System.out.println("age is 17");
            default -> {
                System.out.println("invalid");
                System.out.println("not 12, 17, 18");
            }
        }
    }
}
