package com.company;

import java.util.Scanner;

public class cwh_13_strings {
    public static void main(String[] args) {
        //string is class
        String name = new String("karan");
        //  name = "karan"; we can't change strings anyway
        //  so strings are immutable
        String name1 = "karan";
        System.out.println(name);
        System.out.print("your name is ");
        System.out.println(name1);
        System.out.printf("name 1 is %s and name is %s",name1,name);
        System.out.println();
        System.out.format("name 1 is %s and name is %s",name1,name);
        float f = 0.9393993f;
        System.out.printf("%8.3f",f);


        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        String wholeLine = sc.nextLine();
        System.out.println(word);
        System.out.println(wholeLine);
    }

}
