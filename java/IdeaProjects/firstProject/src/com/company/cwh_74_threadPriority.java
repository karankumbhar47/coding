package com.company;

import java.util.Scanner;
import java.util.Arrays;

class myThr extends Thread{
    myThr(String name){
        super(name);
    }
    public void run(){
        while(true) {
            System.out.println("This is Thread number ==>" + this.getName());
        }
    }
}

public class cwh_74_threadPriority {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        myThr t1 =new  myThr("karan1");
        myThr t2 =new  myThr("karan2");
        myThr t3 =new  myThr("karan3");
        myThr t4 =new  myThr("karan4");
        myThr t5 =new  myThr("karan5(most important)");

        //priority will mostly depend on os
        t5.setPriority(Thread.MAX_PRIORITY);
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);
        t3.setPriority(Thread.MIN_PRIORITY);
        t4.setPriority(Thread.MIN_PRIORITY);


        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}
