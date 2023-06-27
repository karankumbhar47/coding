package com.company;

import java.util.Scanner;
import java.util.Arrays;


interface  Bicycle{
    int a = 4;// this is final and we can't change it
    void applyBreak();
    void speed();
    private void extraLogic(){
        // this method are only accessible by methods of this class;
        System.out.println("This is Extra logic of default method of class Bicycle");
        System.out.println("This method is private which can't be accessed by other classes");
    }
    default void  hornDjj(){
        //This method need not override by other classes as this will declare
        // and initialize here only
        //also accessible by other classes
        System.out.println("This is horn method of interface class Bicycle");
        extraLogic();
    }
}

interface soundHorn{
    int horn = 0;
    default int hornDj(){
        System.out.println("This is hornDj method of class SoundHorn");
        return 8;
    }
    void hornHk();
}

abstract class wheel{
    int wheelProps = 0;
    public wheel(){
        System.out.println("this is constructor of class wheel");
    }
    abstract void wheelClean();
}

class MyCycle extends wheel implements Bicycle,soundHorn {
    public void applyBreak(){
        System.out.println("Applying Break");
    }
    public void speed(){
        System.out.println("Increasing speed");
    }
    public void hornHk(){
        System.out.println("Horn H K H K");
    }
    public int hornDj(){
        System.out.println("Horn D J D J");
//        this.horn+=1;//not allowed
        return this.horn;
    }
    void ownMethod(){
        System.out.println("this is it's own method");
    }

    void wheelClean(){
        System.out.println("Cleaning wheel");
        this.wheelProps = 1;
    }
}

class AronBicycle implements Bicycle{
    //methods should be public
    //all methods of class Bicycle should be implemented
    public void applyBreak(){
        System.out.println("Applying Break");
    }
    public void speed(){
        System.out.println("Increasing speed");
    }
}



public class cwh_54_interface {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        AronBicycle ac = new AronBicycle();
//        ac.speed();
//        ac.applyBreak();
//        System.out.println(ac.a);
//        ac.a = 45;//not allowed

//        System.out.println();
//        Bicycle bcy = new AronBicycle();
//        bcy.applyBreak();
//        bcy.speed();

        //bcy.a = 45;// this is not allowed

        MyCycle mcy = new MyCycle();
        mcy.wheelProps = 1;
//        mcy.a = 23;//not allowed
        System.out.println(mcy.wheelProps);
//        mcy.wheelClean();
//        mcy.hornDj();
//        mcy.applyBreak();
        mcy.hornDj();

    }
}
