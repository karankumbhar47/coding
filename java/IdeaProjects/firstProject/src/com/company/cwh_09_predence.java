package com.company;

public class cwh_09_predence {
    public static void main(String[] args) {
//        precedence of /,* is more than +,-
//        if precedence is equal then operation is done left to right
        float a = 4;
        float b = 10;
        float c = 3;
        float k1 = b*b - 4*a*c/ 2*a;
        float k2 = b*b - (4*a*c)/ 2*a;
        float k3 = (b*b - 4*a*c)/ 2*a;
        float k4 = b*b - (4*a*c)/ (2*a);
        float k5 = (b*b - 4*a*c)/ (2*a);

        System.out.println(k1);
        System.out.println(k2);
        System.out.println(k3);
        System.out.println(k4);
        System.out.println(k5);

    }
}
