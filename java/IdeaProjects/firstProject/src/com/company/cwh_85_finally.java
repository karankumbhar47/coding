package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class cwh_85_finally {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of b");
        int b = sc.nextInt();

        //condition 1
        try {
            System.out.println("Starting try..");
            int a = 5;
            int c = a/b;
            System.out.println("Exiting try...");
        }
        catch (Exception e){
            System.out.println("Starting catch...");
            System.out.println(e);
        }
        finally {
            System.out.println("This code will always execute whatever will happen");
            System.out.println(greet(b));
        }


        //condition 3
        int r = 10;
        int a = 10;
        while (true){
            try {
                System.out.println(a/r);
            }
            catch (Exception e){
                System.out.println(e);
                System.out.println("breaking");
                break;
            }
            finally {
                System.out.println("This block of code will always execute");
                System.out.println("even after break statement");
            }
            r--;
        }
    }

    //condition 2
    public static int greet(int k) {
        try {
            System.out.println("Starting try..");
            int a = 5;
            int b = k;
            int c = a/b;
            System.out.println("Exiting try...");
            System.out.println("Function returning it's value");
            return c;
        }
        catch (Exception e){
            System.out.println("Starting catch...");
            System.out.println(e);
            System.out.println("Function returning it's value");
            return -1;
        }
        finally {
            System.out.println("This code will always execute whatever will happen");
            System.out.println("This will execute even function will return it's value");
        }
    }
}
