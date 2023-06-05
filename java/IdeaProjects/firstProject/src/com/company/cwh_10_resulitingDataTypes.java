package com.company;

public class cwh_10_resulitingDataTypes {
    public static void main(String[] args) {
        byte b = 126;
        short s = 24444;
        int i = 2147483647;
        long l =  9223372036854775807l;
        float f = 9999999999999999999999999999999.9999999999999999f;
        double d = 999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999d;
        char c = 'k';
        char r = c;
        System.out.println("checking types of the char with ....");
        Object obj = null;
        obj = r + b;
        System.out.println("with byte..");
        System.out.println(obj.getClass()+"\n"+r+" + "+b+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + s;
        System.out.println("with short..");
        System.out.println(obj.getClass()+"\n"+r+" + "+s+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + i;
        System.out.println("with int..");
        System.out.println(obj.getClass()+"\n"+r+" + "+i+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + l;
        System.out.println("with long..");
        System.out.println(obj.getClass()+"\n"+r+" + "+l+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + f;
        System.out.println("with float..");
        System.out.println(obj.getClass()+"\n"+r+" + "+f+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + d;
        System.out.println("with double..");
        System.out.println(obj.getClass()+"\n"+r+" + "+d+" = "+obj);
        System.out.println("\n==========================\n");
        obj = r + c;
        System.out.println("with char..");
        System.out.println(obj.getClass()+"\n"+r+" + "+c+" = "+obj);
        System.out.println("\n==========================\n");


        System.out.println(Integer.MIN_VALUE);  // -2,147,483,648 , -2^31
        System.out.println(Integer.MAX_VALUE);  // 2,147,483,647 , 2^31-1

        System.out.println(Integer.toBinaryString(Integer.MIN_VALUE-1));
        System.out.println(Integer.toBinaryString(Integer.MAX_VALUE+Integer.MAX_VALUE));
        System.out.println("=============================================================");

        i =1;
        System.out.println(i);
        System.out.println(i++);
        System.out.println(i);
        System.out.println(++i);
        System.out.println(i);


        int y =7;
        int x = ++i * y;//here x ++ operator has more precedence than * operator
        System.out.println(x);


        char ch = 'a';
        System.out.println(ch++);
        System.out.println(ch--);
        System.out.println(--ch);
    }
}
