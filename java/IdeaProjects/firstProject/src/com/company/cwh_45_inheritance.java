package com.company;

import java.util.Scanner;
import java.util.Arrays;

class FatherBaseSuperClass{
    private int X;

    public int getX() {
        return X;
    }

    public void setX(int x) {
        X = x;
    }
}

class childrenSubDerivedClass extends FatherBaseSuperClass{
    int Y;

    public int getY() {
        return Y;
    }

    public void setY(int y) {
        Y = y;
    }
}
public class cwh_45_inheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        FatherBaseSuperClass F = new FatherBaseSuperClass();
        F.setX(4);
        System.out.println(F.getX());

        childrenSubDerivedClass C = new childrenSubDerivedClass();
        C.setX(44);
        C.setY(45);
        System.out.println(C.getX());
        System.out.println(C.getY());
        System.out.println(F.getX());


    }
}
