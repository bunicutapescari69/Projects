public class AH3 extends AH2{ //a sucursala
    String location;
    public Sucursala(String location) {
        this.location = location;
    }

    @Override
    public void showlocation() {
        System.out.println("The sucursala is located at: " + location);
    }
}
