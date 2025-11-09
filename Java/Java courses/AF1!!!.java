//as hw, use all the functions made in aflib and afbook
public class AF1 {
    AFbook book1 = new AFbook("The Hobbit", "J.R.R. Tolkien", 310);
    AFbook book2 = new AFbook("1984", "George Orwell", 328);
    AFbook book3 = new AFbook("To Kill a Mockingbird", "Harper Lee", 281);

    AFlib library = new AFlib("City Library", "Bd. Mihai Bravu 10");

    {library.add(book1); library.add(book2); library.add(book3);}
}
