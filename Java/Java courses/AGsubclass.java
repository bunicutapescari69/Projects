public class AGsubclass extends AGsuperclass {//and this ones a fucking fir tree (brad)
    int height;

    public AGsubclass(String leafcolour, int nrleaves, double maxtemp) {
        super(leafcolour, nrleaves, maxtemp);
    }

    public void testsub() {
        System.out.println("If you see this, subclass works");
    }
}
