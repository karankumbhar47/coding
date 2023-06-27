package com.company;

import java.util.Arrays;
import java.util.Scanner;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.time.Clock;
import java.util.concurrent.LinkedTransferQueue;

public class cwh_100_javaTime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LocalTime l = LocalTime.now();
        System.out.println(l);

        LocalDate d = LocalDate.now();
        System.out.println(d);

        LocalDateTime dt = LocalDateTime.now();
        System.out.println(dt);
        System.out.println(dt.getNano());

        //making formatter
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        DateTimeFormatter dtf2 = DateTimeFormatter.ISO_LOCAL_DATE;
        //giving formatter to date
        String myDate = dt.format(dtf);
        System.out.println(myDate);

    }
}
