public class AA2 { //fruit
    String colour;
    int sweetscore;
    boolean rare;
    String type;

    public AA2() { //what we did here is give the sweetscore 0 by default if its not defined
        this.sweetscore = 0;
    }

    //ts might seem useless BUT check ac1
    public AA2(String colour, int sweetscore, boolean rare, String type) {
        this.colour=colour;//colour from aa2 class=colour from constructor
        this.sweetscore=sweetscore;
        this.rare=rare;
        this.type=type;
    }

    //you could also use less parameters ig
    public AA2(String colour, int sweetscore, String type) {
        this.colour=colour;
        this.sweetscore=sweetscore;
        this.type=type;
    } //we removed rare since its fucking useless

    public void toJuice(){
        System.out.println("Made a juice of "+ this.type);
    }

    public void howSweet() {
        if(this.sweetscore > -1 && this.sweetscore <=3){
            System.out.println("the " + this.type + " is bitter");
        }
        if(this.sweetscore > 3 && this.sweetscore <=6){
            System.out.println(this.type + " is between sweet and bitter");
        }
        if(this.sweetscore > 6 && this.sweetscore <=10){
            System.out.println("the " +this.type + " is sweet af");
        }
        else {
            System.out.println("uuh the data is invalid");
        }
    }
}
