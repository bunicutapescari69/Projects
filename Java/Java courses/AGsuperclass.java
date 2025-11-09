public class AGsuperclass {
    String leafcolour;
    int nrleaves;
    double maxtemp;

    public AGsuperclass(String leafcolour, int nrleaves, double maxtemp) {
        this.leafcolour = leafcolour;
        this.nrleaves = nrleaves;
        this.maxtemp = maxtemp;
    }

    public void test() {
        System.out.println("If you see this, superclass works");
    }

}