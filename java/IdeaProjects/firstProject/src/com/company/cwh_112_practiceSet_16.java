package com.company;

import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;
import java.io.File;
import java.io.FileWriter;

//question 4
@Deprecated
interface demoInterface{
    @Deprecated
    void display();
}

public class cwh_112_practiceSet_16 {
    @SuppressWarnings("deprecation")
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //question 4
        demoInterface dm = new demoInterface() {
            @Override
            public void display() {
                System.out.println("overriding....");
            }
        };
        dm.display();

        //question 5
//        System.out.println("Enter the number of table should be created ");
//        int n = sc.nextInt();
//        File folder = new File("./PS_16");
//        File file = new File("./PS_16/table_"+n);
//        try {
//            folder.mkdir();
//            file.createNewFile();
//            FileWriter fileWriter = new FileWriter("./PS_16/table_"+n);
//            for(int i=0; i<10; i++){
//                fileWriter.write(n*(i+1)+"\n");
//            }
//            fileWriter.close();
//        } catch (IOException e) {
//            System.out.println(e);
//            throw new RuntimeException(e);
//        }

        //question 6
        String folderPath = "./PS_16/table_2_to_9/";
        File directory = new File(folderPath);
        try {
            directory.mkdir();
            for(int j=2; j<=9; j++) {
                File file1 = new File(folderPath+"/table_"+j);
                file1.createNewFile();
                FileWriter fileWriter = new FileWriter(folderPath+"/table_"+j);
                for (int i = 0; i < 10; i++) {
                    fileWriter.write(j * (i + 1) + "\n");
                }
                fileWriter.close();
            }
        } catch (IOException e) {
            System.out.println(e);
//            throw new RuntimeException(e);
        }

    }
}
