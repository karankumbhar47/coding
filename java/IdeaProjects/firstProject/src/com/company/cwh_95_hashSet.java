package com.company;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class cwh_95_hashSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<Integer> hashName = new HashSet<>(3,0.5f);
        hashName.add(33);
        hashName.add(3);
        hashName.add(3);
        hashName.add(30);

        System.out.println(hashName.size());
        System.out.println(hashName);

        hashName.add(44);
        System.out.println(hashName.size());

        System.out.println(Math.pow(2,64)/1000/3600/24/365);
    }
}
