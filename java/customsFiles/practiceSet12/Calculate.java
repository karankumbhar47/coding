package cal;

import java.util.Scanner;

import javax.swing.plaf.basic.BasicTreeUI.TreeCancelEditingAction;

class Operation{
    public Operation(){
        operatorInput();
        System.out.println("Result is "+operation());
    }


    Scanner sc = new Scanner(System.in);
    private int operator;
    private int operand1;
    private int operand2;

    public float operation(){
        switch(this.operator){
            case 1 :
                return this.operand1+this.operand2;
            case 2 :
                return this.operand1-this.operand2;
            case 3 :
                return this.operand1*this.operand2;
            case 4 :
                return this.operand1/(float)this.operand2;
            default : 
                System.out.println("Invalid Operand");
                return 0.0f;
        }
        return 0.0f;
    }

    public void operatorInput(){
        System.out.println("Enter the num1");
        this.operand1 = sc.nextInt();
        System.out.println("Enter the num2");
        this.operand2 = sc.nextInt();


        System.out.println("Which operation you want to perform");
        System.out.println("\t1]Addition");
        System.out.println("\t2]Subtration");
        System.out.println("\t3]Multiplication");
        System.out.println("\t4]Division");

        this.operator = sc.nextInt(); 
    }
}
public class Calculate {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        while(true){
            if(!enterOrQuit()){
                break;
            }
            else{
                Operation op = new Operation();
            }
        }
    }

    public static boolean enterOrQuit(){
        System.out.println("You Want to Calculate or Exit");
        System.out.println("\t1]Calculate");
        System.out.println("\t2]Exit");
        int choice = sc.nextInt();
        switch(choice){
            case 1 : 
                return true;
                break;
            case 2 :
                return false;
                break;
            default :
                enterOrQuit();
        }
    }  
}
