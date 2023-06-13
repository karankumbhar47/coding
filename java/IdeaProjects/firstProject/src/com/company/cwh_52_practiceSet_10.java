package com.company;

import java.util.Map;
import java.util.Scanner;
import java.util.Arrays;

class Circle{
    int r;
    double pi = Math.PI;
    public Circle(int radius){
        this.r = radius;
    }

    double surfaceArea(){
        return pi*r*r;
    }

    double perimeter(){
            return 2*pi*r;
    }
}

class Cylinder extends Circle{
    private int h;
    public Cylinder(int radius,int height) {
        super(radius);
        this.h = height;
    }

    @Override
    public double surfaceArea(){
        return 2*pi*r*r + 2*pi*r*h;
    }

    public double volume(){
        return pi*r*r*h;
    }
}

public class cwh_52_practiceSet_10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //question1
        Circle c = new Circle(4);
        Cylinder cy = new Cylinder(4, 5);
        System.out.println(c.surfaceArea());
        System.out.println(c.perimeter());
        System.out.println(cy.surfaceArea());
        System.out.println(cy.volume());
    }
}
