package com.company;

import java.util.Map;
import java.util.Scanner;
import java.util.Arrays;

class cylinder{
    double pi = Math.PI;
    private  int radius;
    private  int height;

    public cylinder(int radius, int height){
        this.radius = radius;
        this.height = height;
    }

    public void setRadius(int radius){
        this.radius = radius;
    }

    public void setHeight(int height){
        this.height = height;
    }

    public int getRadius() {
        return radius;
    }

    public int getHeight() {
        return height;
    }

    public double surfaceArea(){
        return (2*pi*radius*height + 2*pi*radius*radius);
    }

    public double volume(){
        return pi*radius*radius*height;
    }
}

class MyRectangle{
    private int length;
    private int breadth;
    public MyRectangle(int length,int breadth){
        this.length = length;
        this.breadth = breadth;
    }

    public MyRectangle(int length){
        this.length = length;
        this.breadth = 5;
    }

    public MyRectangle(){
        this.length = 4;
        this.breadth = 5;
    }

    public int getLength() {
        return length;
    }

    public int getBreadth() {
        return breadth;
    }

}

public class cwh_44_practiceSet_9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        cylinder myCylinder = new cylinder(9,12);
//        myCylinder.setHeight(55);
//        myCylinder.setRadius(45);
//        System.out.println(myCylinder.getHeight());
//        System.out.println(myCylinder.getRadius());
//        System.out.println(myCylinder.surfaceArea());
//        System.out.println(myCylinder.volume());
//
//        cylinder myCylinder2 =new  cylinder(9,12);
//        System.out.println(myCylinder2.surfaceArea());
//        System.out.println(myCylinder2.volume());
        MyRectangle rect = new MyRectangle(44,55);
        System.out.println(rect.getBreadth());
        System.out.println(rect.getLength());

        MyRectangle rect1 = new MyRectangle(44);
        System.out.println(rect1.getBreadth());
        System.out.println(rect1.getLength());

        MyRectangle rect2 = new MyRectangle();
        System.out.println(rect2.getBreadth());
        System.out.println(rect2.getLength());
    }
}
