package com.company;

import java.util.Scanner;
import java.util.Arrays;

class MyThr1 extends Thread{
    @Override
    public void run(){
        int i = 0;
        while(true) {
            System.out.println("Thread1 is running ==>");
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i++;
        }
    }
}

class MyThr2 extends Thread{
    @Override
    public void run(){
        int i = 0;
        while(true) {
            System.out.println("==> Thread2 is running");
            i++;
        }
    }
}


public class cwh_75_threadMethod {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        MyThr1 m1 = new MyThr1();
        MyThr2 m2 = new MyThr2();
        m2.setPriority(Thread.MAX_PRIORITY);
        m1.setPriority(Thread.MIN_PRIORITY);
        //This will run both m1 and m2
        m1.start();
        m2.start();

        //so to run m2 after m1 use .join method
//        m1.start();
//        try {
//            m1.join();
//        }
//        catch (Exception e){
//            System.out.println(e);
//            System.out.println("This is error");
//        }
//        m2.start();


    }
}
