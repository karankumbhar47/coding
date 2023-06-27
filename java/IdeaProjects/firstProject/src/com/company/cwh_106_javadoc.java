package com.company;


import java.util.Arrays;
import java.util.Scanner;

/**
 * This is custom class which will demonstrate how to use <b>javaDoc tool</b>
 * <p>This is region where all description will be written<br>
 * below this line all will not display in class description<br>
 * This will give description about class so this should be written above class</p>
 * <ul>
 *     <li>item 1</li>
 *     <li>item 2</li>
 *     <li>item 3</li>
 * </ul>
 * @author Karan Kumbhar
 * @version 4.0.0.1
 * @see <a href="https://docs.oracle.com/en/java/javase/20/docs/api/index.html" target="_blank">Java docs</a>
 * @since 2003
 *
 */
public class cwh_106_javadoc {

    /**
     * This is constructor of main public class
     * @param i this is i
     * @param j this is j
     */
    public cwh_106_javadoc(int i,int j){
        System.out.println("This is constructor of main public class");
    }

    /**
     * This is Description of main function so this should be written above method
     * @param args These are the parameters passed through command line
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    }

    /**
     * This method will add two numbers
     * @param i operand 1
     * @param j operand 2
     * @throws Exception if addition will be overflow
     * @deprecated you can use better method instead
     * @return addition of operand 1 and operand 2
     */
    @Deprecated
    public int add(int i, int j) throws Exception{
        int c = i+j;
        return c;
    }
}
