package com.company;

import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Scanner;

public class cwh_93_dequeue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayDeque<String> names = new ArrayDeque<>();
        names.add("Karan");
        names.add("Karan1");
        names.add("Karan2");
        names.add("Karan3");

        System.out.println(names.getFirst());
        System.out.println(names.getLast());
        System.out.println(names.toString());

        names.addFirst("First");
        names.addLast("last");


    }
}
