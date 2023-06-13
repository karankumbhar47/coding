package com.company;

import java.util.Scanner;

class myEmployee{
    private int id=12140860;
    private  String name = "karan";
    void getId(){
        System.out.println("Your id is :- "+id);
    }
    void getName(){
        System.out.println("Your name is :- "+name);
    }

    public myEmployee(){
        getName();
        getId();
    }
    public   myEmployee(String nameInput,int idInput){
        this.name = nameInput;
        this.id = idInput;
        getId();
        getName();
    }
    public  myEmployee(String nameInput){
        this.name = nameInput;
        this.id = 12140;
        getId();
        getName();
    }
}
public class cw42_constructor {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        myEmployee E1 = new myEmployee("karan",12140860);//creating and initialize
        myEmployee E2 = new myEmployee("karan");//creating and initialize
        myEmployee E3 = new myEmployee();//creating and initialize
    }
}
