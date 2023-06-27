package anothoerPackage;
import myPackage.subPackage.Karan4;

//subclass of superclass which is from another package
class Children extends Karan4{
    Children(){
        System.out.println("This is constructor of Children class of usingPackage");
        System.out.println("This is children of class Karan4 from another class");
    }
    void method(){
        System.out.println(this.w);//public
        System.out.println(this.x);//protected
//        System.out.println(this.y);//default
//        System.out.println(this.z);//private
    }
}

public class usingPackage{
    public static void main(String []args){
        Karan4 k = new Karan4();
        k.sayHelloMethod();
        System.out.println(k.w);
        // System.out.println(k.x);//protected
        // System.out.println(k.y);//default
        // System.out.println(k.z);//private
    }
}