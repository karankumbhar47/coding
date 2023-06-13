package com.company;


public class cwh_26_array {
    //arrays
    public static void main(String[] args) {
        int []marks = new int [8];//declaration and memory allocation
        marks[0] = 100;//initialization
        marks[1] = 101;
        marks[2] = 102;
        marks[3] = 103;
        marks[4] = 104;
        marks[5] = 105;
        marks[6] = 106;
        marks[7] = 107;
        System.out.println(marks[3]);
        System.out.println(marks[0]);


        int []arrayName;//declaration
        arrayName = new int[]{1, 2, 3, 4, 5};//memory allocation and initialization

        int []arrayName1;//declaration
        arrayName1 = new int[3];//memory allocation
        arrayName1[0]=2;//initialization
        arrayName[1]=3;

        int []arrayName2 = {1,2,3,4,5};//declaration, memory allocation and initialization
        String []str = {"karan","kumbhar","harry","code","with"};

        for(int i =0 ; i<str.length;i++){
            System.out.println(str[i]);
        }

        for (String element : str) {
            System.out.println(element);
        }

        //multidimensional array
//        int [][][] mulD = new int[2][2][2];
//        mulD[0][0][0]=1;
//        mulD[0][0][1]=2;
//        mulD[0][1][0]=3;
//        mulD[0][1][1]=4;
//        mulD[1][0][0]=5;
//        mulD[1][0][1]=6;
//        mulD[1][1][0]=7;
//        mulD[1][1][1]=8;
//        int [][][] mulD ={{{1,2},{3,4}},{{5,6},{7,8}}};
        int [][][]mulD;
        mulD = new   int[2][2][2];


        for(int [][] element: mulD){
            for (int []elementInside:element) {
                for (int lastElement:elementInside) {
                    System.out.print(lastElement);
                    System.out.print(" ");
                }
                System.out.println();
            }
            System.out.println();
        }

    }



}
