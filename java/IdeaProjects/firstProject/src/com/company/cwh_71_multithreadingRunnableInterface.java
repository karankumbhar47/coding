package com.company;

import java.util.Scanner;
import java.util.Arrays;

class ThreadRunnable1 implements Runnable{
    @Override
    public void run() {
        int i = 0;
        while(i<1000) {
            System.out.println("Thread 1 ==>");
            i++;
        }
    }
}

class ThreadRunnable2 implements Runnable{
    @Override
    public void run() {
        int i = 0;
        while(i<1000) {
            System.out.println("<==Thread 2");
            i++;
        }
    }
}


public class cwh_71_multithreadingRunnableInterface {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ThreadRunnable1 task1 = new ThreadRunnable1();
        Thread toRunThread1 = new Thread(task1);

        ThreadRunnable2 task2 = new ThreadRunnable2();
        Thread toRunThread2 = new Thread(task2);

        toRunThread1.start();
        toRunThread2.start();
    }
}
