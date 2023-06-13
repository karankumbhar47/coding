package com.company;

import java.util.Arrays;
import java.util.Scanner;


class Employee{
    //these are non-static members
    int id;
    int salary;
    String name;

    void printDetails(){
        System.out.println("Name of Employee is "+ name);
        System.out.println("Id of Employee is "+id);
        getSalary();
    }

    void getSalary(){
        System.out.println("salary of "+name+" is "+salary);
    }

}
public class cwh_38_oops {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //creating object
        Employee e1 = new Employee();

        //setting attributes
        e1.id = 12140860;
        e1.name = "karan";
        e1.salary = 4400000;

        //using its method
        e1.printDetails();
        e1.getSalary();
    }
}
