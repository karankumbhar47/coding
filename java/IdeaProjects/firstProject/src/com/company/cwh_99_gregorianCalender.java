package com.company;

import java.util.*;

public class cwh_99_gregorianCalender {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Calendar c = Calendar.getInstance();
        System.out.println(c.get(Calendar.SECOND));
        System.out.println(c.get(Calendar.MINUTE));
        System.out.println(c.get(Calendar.HOUR));
        System.out.println(c.get(Calendar.DAY_OF_MONTH));
        System.out.println(c.get(Calendar.HOUR_OF_DAY));

        GregorianCalendar gc = new GregorianCalendar();
        System.out.println(gc.isLeapYear(2000));

        String []ids = TimeZone.getAvailableIDs();
        for (String id : ids){
            System.out.println(id);
        }



        System.out.println(TimeZone.getDefault());
    }
}
