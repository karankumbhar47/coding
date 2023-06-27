package com.company;

import java.util.Scanner;
import java.util.Arrays;

class MyThread extends Thread{
    Scanner sc = new Scanner(System.in);
    public MyThread(String name){
        super(name);
    }
    public MyThread(Runnable r){
        super(r);
    }
    public MyThread(Runnable r,String name){
        super(r,name);
    }
    public MyThread(){
        super();
    }


    public void run(){
        int i = 0;
        while(i<10){
            System.out.println("\n======START==========");
            System.out.println("id is ==>"+this.getId());
            System.out.println("inside function..... ==>"+i);
            System.out.println("========END========\n");
            i++;
        }
    }
}

class MyThread2 implements Runnable{
    public MyThread2(){
        System.out.println("This is constructor of class MyThread2 implements runnable");
    }
    public void run(){
        int i = 0;
        while(i<50){
            System.out.println("==> "+i);
            i++;
        }
    }
}

public class cwh_73_threadConstructor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Runnable r = new MyThread2();
        MyThread mt1 = new MyThread();
        MyThread mt2 = new MyThread("karan-2");
        MyThread mt3 = new MyThread(r);
        MyThread mt4 = new MyThread(r,"karan-4");

        System.out.println("Name's mt1==> "+mt1.getName()+"==>"+mt1.getId());
        System.out.println("Name's mt2==> "+mt2.getName()+"==>"+mt2.getId());
        System.out.println("Name's mt3==> "+mt3.getName()+"==>"+mt3.getId());
        System.out.println("Name's mt4==> "+mt4.getName()+"==>"+mt4.getId());

        mt1.setPriority(1);
        mt2.setPriority(2);
        mt3.setPriority(3);
        mt4.setPriority(4);
        r.run();
        System.out.println(r.toString());
        System.out.println(r.getClass());
        System.out.println();

        MyThread mt = mt1;
        mt1.start();

        System.out.println(mt.getState());
        System.out.println(mt.getName());
        System.out.println(mt.getId());
        mt4.start();
        System.out.println(mt.getThreadGroup());
        System.out.println(mt.getPriority());
        System.out.println(mt.isAlive());
        mt2.start();
        System.out.println(mt.isInterrupted());
        System.out.println(mt.getState());
        mt3.start();

//        mt.start();
//        System.out.println(mt.getState());
//
//        System.out.println(mt.getId());
//        System.out.println(sc.next()+"outside function");
//        System.out.println(mt.getState());
//
//        System.out.println(mt.getPriority());
//        System.out.println(sc.next()+"Outside function");
//        System.out.println(mt.getState());
//
//        System.out.println(mt.getThreadGroup());
//        System.out.println(mt.getState());
//
//        System.out.println(Arrays.toString(mt.getStackTrace()));
//        System.out.println(mt.getState());
    }
}
