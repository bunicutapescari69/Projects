public class AC1 { //main 4
    public static void main(String[] args) {
        //today we'll do constructors
        //basically whenever you define atributes for custom data type objects youd define them after the object
        //heres how to define them BEFORE the object:

        //with default constructor
        AB1 audi=new AB1();
        AA2 mango=new AA2(); //since we didnt define shit its gonna be 0
        System.out.println(mango.sweetscore);

        //made it tomate just for the funsies lol
        AA2 tomato=new AA2("red", 6, false, "tomato");
        //  NOW instead of 4 lines we have just one. ts saves up a lot of lag
        //in this file tho, in aa2 theres 6 more. whats the point?
        //"but its a vegetable"- shut the fuck up

        //theres also private classes which you can only access from the inside
    }
}
