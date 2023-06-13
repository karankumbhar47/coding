package com.company;

public class cwh_14_stringMethod {
    public static void main(String[] args) {
        String name = "Ka1rAanarAr";
        System.out.printf("length of string %d\n", name.length());

        String nameSmall = name.toLowerCase();
        System.out.println(nameSmall);

        String nameBig = name.toUpperCase();// we can't change original string as
                                            // strings are immutable
        System.out.println(nameBig);

        String fullName = " Karan  Sunil   Kumbhar   ";
        System.out.println(fullName);
        String fullNameTrimmed = fullName.trim();
        System.out.println(fullNameTrimmed);

        System.out.println(name.substring(2));
        System.out.println(name.substring(0)); // grey color means it is reluctant

        System.out.println(name.substring(1,3));
        System.out.println(name.substring(0,5));
        System.out.println(name.substring(1,4));


        String nameReplace = name.replace('a','A');
        System.out.println(nameReplace);

        String nameReplaceStr = name.replace("ar", "AAA");
        System.out.println(nameReplaceStr);

        boolean nameStartWith = name.startsWith("har");
        boolean nameEndsWith = name.endsWith("An");
        System.out.println(nameStartWith);
        System.out.println(nameEndsWith);

        System.out.println(name.charAt(0));
        System.out.println(name.charAt(4));

        System.out.println(name.indexOf("Ka"));
        System.out.println(name.indexOf("a"));//gives the fist index where it finds it substring "a"

        System.out.println(name.indexOf("a",2));//start finding subStr from index 2
        System.out.println(name.lastIndexOf("a"));//start finding substr from last index toward index 0
        System.out.println(name.lastIndexOf("a",3)); //start finding substr from index 3 toward index 0
        System.out.println(name.lastIndexOf("a",6));
        System.out.println("=====================");

        System.out.println(name.equals("karan"));
        System.out.println(name.equalsIgnoreCase("ka1rAanarar"));
    }
}
