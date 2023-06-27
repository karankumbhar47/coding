package myPackage.subPackage;

import myPackage.Karan;

// this is default class and I can access it only in whole package
// this class not access by other packages not in subpackage also or superPackage
class customClass{
    public int a = 1;
    protected int b = 2;
//    default int c = 3; // this is wrong declaration no need to write
                         // to declare a default variable don't need to
                         // write default
    int c = 3;
    private int d = 4;

    //insider same class
    public void methodAccessor(){
        //every variable can access inside its own class
        System.out.println(a);//public
        System.out.println(b);//protected
        System.out.println(c);//default
        System.out.println(d);//private
        //since access modifiers are only defined for class member
        //we can control visibility of class members with access modifiers
        //as variables declared inside method is of local scope
        //they don't have any access modifier as well as not any needed any

//        public int aa =0;
//        protected int ab = 0;
//        default int ac = 0;
//        private int ad = 0;
    }
}

class subCustomClass extends customClass{

    public void methodAccessor(){
        //except private access modifier
        //all can be accessed by children class of same package
        System.out.println(a);//public
        System.out.println(b);//protected
        System.out.println(c);//default
        // can't access private fields inside subclass of same package
        // System.out.println(d);//private
    }
}


//subclass of superclass imported from superPackage
class children extends Karan{
     void methodAccessVar(){
         //public and protected are accessible in subclass anywhere
         System.out.println(this.w);//public
         System.out.println(this.x);//protected
         //default and private not accessible in subclass of another package and subpackage
//         System.out.println(this.y);//default
//         System.out.println(this.z);//protected
     }
}

public class Karan4{
    public int w = 1;
    protected int x = 2;
    int y = 3;
    private int z = 4;

    public static void main(String []args){
        System.out.println("This is main function of Karan4");

        //inside same package
         customClass c = new customClass();
         c.methodAccessor();
         System.out.println(c.a);//public
         System.out.println(c.b);//protected
         System.out.println(c.c);//default
        // can't be accessed by other classes inside it's package
        // System.out.println(c.d);//private

        //accessing public class
        Karan kk = new Karan();

        //can't access default class of different package
        //here myPackage.subPackage is subpackage of myPackage
        //so we can't access accessAnywhere class here
        //accessAnywhere ac = new accessAnyWhere();

        subCustomClass sc = new subCustomClass();
        sc.methodAccessor();
    }

    public void sayHelloMethod(){
        System.out.println("Hello world!!");
    }
}