package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class MyGenericClass<T1,T2>{
     private T1 t1;

    public MyGenericClass(T1 t1, T2 t2, int a) {
        this.t1 = t1;
        this.t2 = t2;
        this.a = a;
    }

    public T1 getT1() {
        return t1;
    }

    public void setT1(T1 t1) {
        this.t1 = t1;
    }

    public T2 getT2() {
        return t2;
    }

    public void setT2(T2 t2) {
        this.t2 = t2;
    }

    public int getA() {
        return a;
    }

    public void setA(int a) {
        this.a = a;
    }

    private T2 t2;
     int a;
}

public class cwh_110_generic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList arrayList = new ArrayList();
        arrayList.add("karan");
        arrayList.add(34);
        arrayList.add(44);
        arrayList.add(324.234f);

        //compiler don't know that arrayList[1] is an integer
        System.out.println(arrayList.toString());
        //int a = arrayList[1];//not allowed
        //typecasting
        int a = (int) arrayList.get(1);
        //instead mention arraylist as integer
        ArrayList <Integer> arrayList1 = new ArrayList<>();
        arrayList1.add(2);
        int b = arrayList1.get(0);

        //Generic class
        MyGenericClass<Integer,String> mg = new MyGenericClass(4,"karan",5);
        System.out.println(mg.getA());
        System.out.println(mg.getT1());
        System.out.println(mg.getT2());

    }
}
