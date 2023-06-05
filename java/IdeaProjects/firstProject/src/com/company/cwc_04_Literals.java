package com.company;

public class cwc_04_Literals {
    public static void main(String [] args){
        byte age = 34; // here no need of writting any letter at last of literal
        System.out.println(age);
        int age2 = 32; // for integers no need of writting any letter at last of literal
        System.out.println(age);
        short age3 = 4444;// no need any letter at end
        long bigAge = 56666666666l;//as by default integer type is int we have to change it to long
                                    // so need to mention "l" or "L" at end
        char c = 'A';//char should be in single quotes
        float f1 = 5.6f; //as default decimal literal is double
                         // we have to mention f in last of float literal
        double d2 = 5.6;
        double d3 = 5.6D; // writting D is optional
        double d4 = 5.6d; // we can also write "d" letter instead of "D"
        boolean value = true;
        String name = "Karan";
        System.out.println("my name is "+name);
    }
    
}
