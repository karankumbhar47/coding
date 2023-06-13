package com.company;

public class cwh_16_ifElse {
    public static void main(String[] args) {
        int age = 30;
        if (age<18){
            System.out.println("you can't drive");
        }
        else if (age>18 && age <50) {
            System.out.println("you are young man you can drive");
        }
        else{
            System.out.println("you can't drive you are elder one");
        }
        /* relational operator
        >= , <= , != , ==

        logical operator

        && , || , !
        */
    }
}
