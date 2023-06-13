package com.company;

import java.net.SocketException;
import java.util.Scanner;
import java.util.Arrays;

class Something{
    private int x;

    public int setX(int x) {
//        x = x;wrong Assignment
        this.x = x;
        return this.x+1;
    }



}


public class cwh_47_this {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Something sm = new Something();
        System.out.println(sm.setX(5));

    }
}
