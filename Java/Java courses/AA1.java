public class AA1 {
    //this is where youd put global variables

    public static void main(String[] args) {
        //printing is the same as c++ except its System.out
        int what=10;
        boolean the=true;
        double fuck=10.86;
        char is='g';
        float that=10.5F; //yea for some reason you gotta put "f" after float. what the fuck is this
        String shit="no"; //for "non primitive variable types" whatever this is, you could give them no value with "null";

        System.out.println("Am i alive");
        System.out.println(what+" "+the+" "+fuck+" "+is+" "+that+" "+shit+" "+shit.length());
        System.out.println(shit.toUpperCase());//theres that

        System.out.println("");
        AA2 apple=new AA2();
        apple.type="apel";
        apple.toJuice();
        apple.sweetscore=10;
        apple.howSweet();
    }
}
