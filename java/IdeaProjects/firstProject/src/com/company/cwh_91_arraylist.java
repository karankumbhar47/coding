package com.company;

import java.util.ArrayList;
import java.util.Scanner;

public class cwh_91_arraylist {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> listName = new ArrayList<>(5);
        ArrayList<Integer> listName1 = new ArrayList<>();

        listName1.add(11);
        listName1.add(12);
        listName1.add(13);

        listName.add(0,5);
        listName.add(1);
        listName.add(2);
        listName.add(3);
        listName.add(4);
        listName.add(0,6);
        listName.add(0,7);

        listName.addAll(2,listName1);

        for (int i=0; i<listName.size(); i++){
            System.out.println(listName.get(i));
        }

        for (Integer val :
                listName1) {
            System.out.print(val+" ");
        }
        System.out.println();

        System.out.println(listName.toString());

        System.out.println(listName.indexOf(13));
        System.out.println(listName.contains(13));
        System.out.println(listName.set(2,13));
        System.out.println(listName.toString());
        listName.remove(2);
        listName.remove(2);
        listName.remove(2);
        System.out.println(listName.toString());
        System.out.println(listName.size());
        listName.ensureCapacity(10);
        System.out.println(listName.size());
        listName.removeAll(listName1);

        System.out.println(listName.toString());
    }
}
