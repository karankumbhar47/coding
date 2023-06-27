package com.company;

import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

class guessTheNumber{
    Scanner sc = new Scanner(System.in);
    Random rn = new Random();
    private int noOfGuesses =0;
    private int randomNumber;
    private int guessedNumber;
    private final String playerName;
    private int score = 0;

    public void chooseNumber(){
        System.out.println("Guess the Number between 1 to 100 ... ");
        guessedNumber = sc.nextInt();
        checkChoice();
    }

    public void scoreCalculate(int noOfGuesses){
        this.score = 1000 - noOfGuesses;
    }

    public void checkChoice(){
        if(guessedNumber>=1 && guessedNumber<=100) {
            if(guessedNumber>randomNumber){
                System.out.println("Your Guess is larger than random number");
                System.out.println("Choose lesser number");
                noOfGuesses+=1;
                chooseNumber();
            }
            else if(guessedNumber<randomNumber){
                System.out.println("Your Guess is smaller than random number");
                System.out.println("Choose larger number");
                noOfGuesses+=1;
                chooseNumber();
            }
            else{
                scoreCalculate(noOfGuesses);
                System.out.println("Congratulation");
                System.out.println("You Guess correct Number!!!");
                System.out.println("You Guess in "+noOfGuesses+" guesses");
                System.out.println("Your Score is "+score);
                playOrQuit();
            }
        }
        else{
            System.out.println("You have chosen a number not in range [1,100]");
            System.out.println("Please choose a correct Number");
            chooseNumber();
        }
    }

    public void introToGame(){
        System.out.println("Wel-come "+this.playerName+"!!!");
        System.out.println("\tYou are here to play a boring Game");
        System.out.println("\tThe Game is about to Guess the number Which was chosen by Computer");
        playOrQuit();
    }

    public void computerNumberChosen(){
        System.out.println("Computer is Choosing number ...");
        this.randomNumber = rn.nextInt(100)+1;
        System.out.println("Computer has chosen a number between 1 to 100");
        System.out.println("\t\t\t\tlet's start to guess the number!!!");
    }

    public void quitTheGame(){
        System.out.println("Thank you for playing my boring Game");
        System.out.println("\tHope you don't like it");
        System.out.println("\tDon't play it again");
        return;
    }

    public void playOrQuit(){
        System.out.println("=================================");
        System.out.println("\tDo you want to play ?");
        System.out.println("\t\t1] Yes");
        System.out.println("\t\t2] No");
        int choice = sc.nextInt();
        switch (choice) {
            case 1 -> {
                System.out.println("So you want to play ");
                System.out.println("Then let's start the Game `");
                computerNumberChosen();
                chooseNumber();
            }
            case 2 -> {
                System.out.println("So you don't want to play this boring Game");
                System.out.println("Exiting the Game");
                quitTheGame();
            }
            default -> {
                System.out.println("Please choose a Correct choice");
                System.out.println("Enter a Correct choice again ");
                playOrQuit();
            }
        }
    }

    public guessTheNumber(String playerName){
        this.playerName = playerName;
        introToGame();
        playOrQuit();
    }
}

public class cwh_43_Exercise3_guessTheNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the player");
        String name = sc.nextLine();
        guessTheNumber player = new guessTheNumber(name);
    }
}
