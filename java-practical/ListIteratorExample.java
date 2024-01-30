import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

public class ListIteratorExample {
    public static void main(String[] args) {
        List<String> itemList = new ArrayList<>();
        itemList.add("Item1");
        itemList.add("Item2");
        itemList.add("Item3");

        System.out.println("Printing items in forward direction:");
        ListIterator<String> forwardIterator = itemList.listIterator();
        while (forwardIterator.hasNext()) {
            System.out.println(forwardIterator.next());
        }

        System.out.println("\nPrinting items in backward direction:");
        ListIterator<String> backwardIterator = itemList.listIterator(itemList.size());
        while (backwardIterator.hasPrevious()) {
            System.out.println(backwardIterator.previous());
        }
    }
}
