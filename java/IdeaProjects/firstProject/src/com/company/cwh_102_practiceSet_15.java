package com.company;

import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeFormatterBuilder;
import java.util.*;
import java.time.LocalTime;

public class cwh_102_practiceSet_15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //question 1
        ArrayList<String> names = new ArrayList<>();
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");
        names.add("Karan Kumbhar");

        for(String name : names){
            System.out.println(name);
        }

        //question 2
        Date d = new Date();
        System.out.println(d.getHours()+":"+d.getMinutes()+":"+d.getSeconds());

        Calendar c = Calendar.getInstance();
        System.out.println(c.get(Calendar.HOUR_OF_DAY)+":"+c.get(Calendar.MINUTE)+":"+c.get(Calendar.SECOND));

        LocalTime lc = LocalTime.now();
//        System.out.println(lc);

        DateTimeFormatter df = DateTimeFormatter.ofPattern("k:m:s");
        String myDate = lc.format(df);
        System.out.println(myDate);
          

        //question 4
        Set<Integer> set = new TreeSet<>();
        set.add(2);
        set.add(4);
        set.add(4);
        set.add(4);
        set.add(34);
        System.out.println(set);
    }
}
