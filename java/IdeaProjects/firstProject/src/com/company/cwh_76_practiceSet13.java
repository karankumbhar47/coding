package com.company;

import java.util.Scanner;
import java.util.Arrays;

class Question1Thread1 extends Thread{
    Question1Thread1(String name){
        super(name);
    }
    public void  run(){
        while(true) {
            System.out.println("Wel-come");
            try {
                Thread.sleep(200);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class Question1Thread2 extends Thread{
    Question1Thread2(String name){
        super(name);
    }
    public void run(){
        while (true){
            System.out.println("Good-morning");
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}
public class cwh_76_practiceSet13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //question 1
        Question1Thread1 t1 = new Question1Thread1("Th1");
        Question1Thread2 t2 = new Question1Thread2("Th2");

        System.out.println(t1.getPriority());
        System.out.println(t2.getPriority());

        t2.setPriority(Thread.MIN_PRIORITY);
        t1.setPriority(Thread.MAX_PRIORITY);

        System.out.println(t1.getState());
        System.out.println(Thread.currentThread().getState());
        System.out.println(Thread.currentThread().getName());

        t1.start();
//        t2.start();

    }
}
