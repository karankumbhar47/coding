package com.company;

import java.util.*;
import java.time.*;

public class cwh_96_date {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //you will get numbers of millSeconds from 1 jan 1970
        //you can find number of years from 1970 or any other
//        System.out.println(System.currentTimeMillis()/1000/3600/24/365);
//
//        Date d = new Date();
//        System.out.println(d.getTime());
//        System.out.println(System.currentTimeMillis());
//        System.out.println(d.getDate());
//        //day of week
//        System.out.println(d.getDay());
//        System.out.println(d.getYear());
//        System.out.println(d.getTimezoneOffset());
//        System.out.println(d.toGMTString());

        //calender class
        Calendar c = Calendar.getInstance();
        System.out.println(c.getCalendarType());
        System.out.println(c.getTime());
        System.out.println(c.getTimeZone());
        System.out.println(c.getTimeZone().getDisplayName());

        Calendar c1 = Calendar.getInstance(TimeZone.getTimeZone("Asia/Singapore"));
        System.out.println(c1.getTimeZone());
        System.out.println(c1.getTimeZone().getDisplayName());
        System.out.println(c1.getTimeZone().getID());
        //as calendar is abstract class we can't make directly it's object
        //instead we can create it's instant by method getInstance
    }
}
