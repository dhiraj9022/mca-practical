import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MapOperations {
    public static void main(String[] args) {
        Map<String, Integer> itemMap = new HashMap<>();

        addItemToMap(itemMap, "Item1", 10);
        addItemToMap(itemMap, "Item2", 20);
        addItemToMap(itemMap, "Item3", 30);
        System.out.println("Initial Map: " + itemMap);
        removeItemFromMap(itemMap, "Item2");
        System.out.println("Map after removing 'Item2': " + itemMap);
    }

    private static void addItemToMap(Map<String, Integer> map, String key, int value) {
        map.put(key, value);
        System.out.println("Added: " + key + " - " + value);
    }

    private static void removeItemFromMap(Map<String, Integer> map, String key) {

        if (map.containsKey(key)) {
            int removedValue = map.remove(key);
            System.out.println("Removed: " + key + " - " + removedValue);
        } else {
            System.out.println("Item '" + key + "' not found in the map.");
        }
    }
}
