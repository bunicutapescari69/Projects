import java.util.ArrayList;

public class AFlib {
    String name;
    String address;
    ArrayList<AFbook> list = new ArrayList<AFbook>();
    public void add(AFbook book) {
        list.add(book);
    }

    public void show() {
        for(AFbook book : list) {
            System.out.println(book.title);
        }
    }

    public void showgoodbooks() {
        for(AFbook book : list) {
            if(book.rating>=8) {
                System.out.println(book.title);
            }
        }
    }

    public void showauthor(String author) {
        for(AFbook book : list) {
            if(book.author.equals(author)) {
                System.out.println(book.title);
            }
        }
    }

    public AFlib(String name, String address){
        this.name=name;
        this.address=address;
    }
}