public class AB2 { //main 3
    public static void main(String[] args) {
        AB1 car=new AB1();
        AA2 gift=new AA2();
        car.brand="BMW";
        gift.type="starfruit";
        gift.sweetscore=9;
        car.gift=gift; //car.gift from ab1= the gift here
        System.out.println(car.brand);
        car.buyCar();
        gift.howSweet();
    }   
}