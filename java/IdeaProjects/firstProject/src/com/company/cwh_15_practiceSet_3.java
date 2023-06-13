package com.company;

import java.util.Locale;
import java.util.Scanner;

public class cwh_15_practiceSet_3 {
    public static void main(String[] args) {
        //// question 1
        //Scanner sc = new Scanner(System.in);
        //String name = sc.nextLine();
        //System.out.println(name.toLowerCase());

        //// question 2
        //System.out.println(name.replace(' ','_'));

        //question 3
        String letter = "  Dear <name>   , thanks  a lot\n Replacing   <name> with some   acutal name   ";
        System.out.println(letter.replace("<name>","Karan"));

        //question 4
        System.out.println(letter.indexOf("   "));
        System.out.println(letter.indexOf("  "));
        System.out.println(letter.indexOf("    "));

        //question 5
        String letterFormat = "Dear Harry,\n\tThis course is really nice.\n\tThanks!!!";
        System.out.println(letterFormat);


    }
}
