package com.company;

import java.util.Scanner;
import java.util.Arrays;

class FatherBaseSuperClass{
    protected int X;

    protected int getX() {
        return X;
    }

    void setX(int x) {
        X = x;
    }

     void   methodTrial(){
        System.out.println("This is methodTrial of class FatherBaseSuperClass");
    }
}

class childrenSubDerivedClass extends FatherBaseSuperClass{
    int Y;
    @Override
    public int getX(){
        System.out.println("overriding method getX and changing access modifier");
        System.out.println("protected --> public");
        return this.X;
    }

    @Override
    public  void methodTrial() {
//        sSystem.out.println("overriding method method and changing access modifier");
//        System.out.println("protected --> public");uper.methodTrial();
//        System.out.println("");
    }

    @Override
    public void setX(int x){
        this.X = x;
        System.out.println("overriding method setX and changing access modifier");
        System.out.println("default --> public");
    }
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
