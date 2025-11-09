import java.util.ArrayList;
import java.util.Collections;

public class AG1 {
    public static void main(String[] args) {
        AGsubclass firtree = new AGsubclass("dark green", 1500, 30.5); //from the subclass we can access the superclass methods and the subclass ones
        firtree.test();
        firtree.testsub();
        firtree.height=10;

        System.out.println(firtree.height);

        AGsuperclass someplant = new AGsuperclass("green", 300, 35.5);
        someplant.test();
        //someplant.testsub(); //this will give an error bc we cant access subclass methods from superclass objects

        //ye y got the point, you dont need another subclass for the superclass even tho its in the lesson 💀
        //im lazy
    }
}
