import java.util.ArrayList;
public class AD1 {
    public static void main(String[] args) {
        //today we ll do array stuff, basically a vector
        String[] a= {"orange", "water", "ref"};
        System.out.println(a[0]); //orange
        int[] b= new int [4]; //basically thats the size of a emty vector /w 4 slots
        b[0]=5; //so now we gotta assign them afterward

        ArrayList<String> c=new ArrayList<String>();
        c.add("Dacia");//thtas how y add in array list
        c.add(1,"Lada"); //this is how you set the index to write to
        //after a li experimenting i found out you have to set the index to be consecutive, what the fuck is this sorcery
        System.out.println(c.get(1));
    }
}