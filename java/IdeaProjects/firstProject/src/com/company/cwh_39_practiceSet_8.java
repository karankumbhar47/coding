package com.company;

import java.util.Arrays;
import java.util.Scanner;

//question 1
class EmployeeSet {
    String name = "karan";
    int salary = 4430000;
    void getName(){
        System.out.println(name);
    }

    void getSalary(){
        System.out.println(salary);
    }
    void setName(String s){
        name = s;
    }
}

//question 2
class CellPhone{
    void ring(){
        System.out.println("ringing ...");
    }
    void vibrate(){
        System.out.println("vibrating ...");
    }
}

//question 3
class Square{
    int side;

    public Square(int i) {
        side = i;
    }

    int area(){
        return side*side;
    }
    int perimeter(){
        return  4*side;
    }
}

class Rectangle{
    int length;
    int breadth;


    public Rectangle(int a, int b){
        length = a;
        breadth = b;
    }
    int getArea(){
        return  length*breadth;
    }
    int getPerimeter(){
        return 2*(length+breadth);
    }
}
public class cwh_39_practiceSet_8 {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //question 1
        EmployeeSet E1 = new EmployeeSet();
        E1.getName();
        E1.getSalary();
        E1.setName("Harry");
        E1.getName();

        //question 2
        CellPhone C1 = new CellPhone();
        C1.ring();
        C1.vibrate();

        //question 3
        Square S1 = new Square(4);
//        S1.side = 4;
        System.out.println(S1.area());
        System.out.println(S1.perimeter());

        //question 4
        Rectangle R1 = new Rectangle(3,4);
        System.out.println(R1.getArea());
        System.out.println(R1.getPerimeter());


    }
}
