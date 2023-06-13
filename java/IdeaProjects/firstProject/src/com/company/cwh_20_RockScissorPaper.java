package com.company;
import java.util.Scanner;
import java.util.Random;

public class cwh_20_RockScissorPaper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Test cases");
        int t = sc.nextInt();
        while(t>=0) {
            t--;
            Random random = new Random();
            int num1 = random.nextInt(3) + 1;
            System.out.println("Enter Your choice\n\t1] Stone\n\t2] Scissor\n\t3] Paper");
            int num2 = sc.nextInt();
            switch (num1) {
                case 1 -> {
                    switch (num2) {
                        case 1 -> System.out.println("Tie");
                        case 2 -> System.out.println("You Loose");
                        case 3 -> System.out.println("You win");
                    }
                }
                case 2 -> {
                    switch (num2) {
                        case 1 -> System.out.println("You win");
                        case 2 -> System.out.println("Tie");
                        case 3 -> System.out.println("You loose");
                    }
                }
                case 3 -> {
                    switch (num2) {
                        case 1 -> System.out.println("You loose");
                        case 2 -> System.out.println("You win");
                        case 3 -> System.out.println("Tie");
                    }
                }
            }
            String choice = null;
            switch (num1) {
                case 1 -> choice = "Stone";
                case 2 -> choice = "Scissor";
                case 3 -> choice = "Paper";
            }
            System.out.println("Computer choice " + choice);
        }
    }
}
