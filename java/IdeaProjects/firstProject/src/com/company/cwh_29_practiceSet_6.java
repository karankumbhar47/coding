package com.company;

import java.util.Arrays;
import java.util.Collection;
import java.util.Scanner;
import java.util.Arrays;

public class cwh_29_practiceSet_6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arrayInt = {1, 2, 3, 4, 5};
        int n = arrayInt.length;
        /*
        //question 1
        float[] array = {44.0f, 44.22f, 77.f, 23.f, 23.f};
        int[] arrayInt = {1, 2, 3};
        float sum = 0;
        for (float element : array) {
            sum += element;
        }
        System.out.println(sum);
        System.out.println(Arrays.stream(arrayInt).sum());
//       System.out.println(Arrays.stream(array).sum());//this method only available for int,long, double;
//        float floatSum = Arrays.stream(array).reduce(0f, (a, b) -> a + b);
//        System.out.println(floatSum);

        //question 2
        int num = sc.nextInt();
        Arrays.sort(arrayInt);
        int indexHigh = arrayInt.length -1;
        int indexLow = 0;
        int flag =0;
        while(indexLow <= indexHigh) {
            int indexMid = (int) Math.ceil((indexLow + indexHigh) / 2.0f);//as math.ceil always return double value;
            if(arrayInt[indexMid]==num){
                flag =1;
                System.out.println("This element is present");
                break;
            }
            else if(arrayInt[indexMid]>num){
                indexHigh = indexMid - 1;
            }
            else {
                indexLow = indexMid + 1;
            }
        }
        if(flag==0){
            System.out.println("This element is not present");
        }

        //question 4
       int [][]mat1 = {
                        {1,2,3},
                        {4,5,6}
                       };

       int [][]mat2 = {
                        {1,2,3},
                        {4,5,6}
                       };

       int [][]mat3 = new int[2][3];
       for(int i=0; i<2; i++){
           for(int j=0; j<3; j++){
               mat3[i][j] = mat1[i][j] + mat2[i][j];
           }
       }
       for(int[] row:mat3){
           for (int element: row){
               System.out.print(element+" ");
           }
           System.out.println();
       }

        //question 5
        for(int element : arrayInt){
            System.out.print(element+" ");
        }
        System.out.println();
        for(int i=0; i<arrayInt.length/2; i++){
            int temp = arrayInt[i];
            arrayInt[i] = arrayInt[arrayInt.length-i-1];
            arrayInt[arrayInt.length-i-1] = temp;
        }
        for(int element : arrayInt){
            System.out.print(element+" ");
        }
         */

        //question 6
        int max = Integer.MIN_VALUE;
        for (int element : arrayInt){
            if (max<element){
                max =element;
            }
        }
        System.out.println(max);

        //question 7
        int min = Integer.MAX_VALUE;
        for (int element : arrayInt){
            if (min>element){
                min =element;
            }
        }
        System.out.println(min);
        System.out.println(Arrays.toString(arrayInt));

        //question 8
        boolean isSroted = true;
        for (int i=0; i<n-1; i++){
            if(arrayInt[i]>arrayInt[i+1]){
               isSroted = false;
            }
        }
        if(isSroted){
            System.out.println("Array is sorted");
        }
        else{
            System.out.println("Array is not sorted");
        }
    }
}
