package com.company;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class cwh_111_fileHandling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

//        File file = new File("./newFile.txt");
//        //while creating file need to handle Exception
//        try {
//            file.createNewFile();
//        }
//        catch (Exception e){
//            System.out.println("cannot create...");
//            System.out.println(e);
//            e.printStackTrace();
//        }

//        try {
//            FileWriter fileWriter = new FileWriter("./newFile.txt");
//            fileWriter.write("I am writting file\nThis is second line");
//            //needed to close file otherwise content will not be write
//            fileWriter.close();
//        } catch (IOException e) {
//            System.out.println("Not able to write");
//            System.out.println(e);
//            throw new RuntimeException(e);
//        }

        File file = new File("./newFile.txt");
        try {
            Scanner readFile = new Scanner(file);
            while (readFile.hasNextLine()){
                String line = readFile.nextLine();
                System.out.println(line);
            }
        } catch (FileNotFoundException e) {
            System.out.println("Catching ....");
            System.out.println(e);
//            throw new RuntimeException(e);
        }


        //delete file
        File file1 = new File("./newFile.txt");
        if(file1.delete()){
            System.out.println(file1.getName()+" deleted!!!");
        }
        else{
            System.out.println(file1.getName()+"not deleted");
        }


    }
}
