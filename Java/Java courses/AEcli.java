import java.util.ArrayList;

public class AEcli {
    String name;
    ArrayList<Integer> account = new ArrayList<Integer>();

    public AEcli(String name){
        this.name=name;
    }

    public void add(Integer money) {
        account.add(money);
    }

    public void rem(Integer money) {
        account.add(-money);
    }

    public int cs() {
        int sum=0;
        for(Integer i : this.account) {
            sum+=i;
        }
        return sum;
    }

    public void transactions() {
        for(Integer trans : this.account) {
            if(trans<0) {
                System.out.println("Removed: " + trans);
            }else {
                System.out.println("Added: " + trans);
            }
        }
    }
}
