package myPackage;


//accessing this class in karan1.java file of same package
//we can't access this class in karan4.java as this belongs to
//myPackage.subPackage which is subPackage of myPackage
class accessAnywhere{
    int a = 0;
    public accessAnywhere(){
        System.out.println("This is constructor of class accessAnywhere");
    }
}



public class Karan{
    public int w = 1;
    protected int x = 2;
    int y = 3;
    private int z = 4;

    public static void main(String []args){
        System.out.println("This is main function of Karan");
    }


}