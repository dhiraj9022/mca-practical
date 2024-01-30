public class GenericDemo {

    static class GenericBox<T> {
        private T value;

        public GenericBox(T value) {
            this.value = value;
        }

        public T getValue() {
            return value;
        }
    }

    static <T> boolean areEqual(T element1, T element2) {
        return element1.equals(element2);
    }

    public static void main(String[] args) {
        GenericBox<Integer> integerBox = new GenericBox<>(10);
        GenericBox<String> stringBox = new GenericBox<>("Hello");

        System.out.println("Integer Box Value: " + integerBox.getValue());
        System.out.println("String Box Value: " + stringBox.getValue());

        Integer number1 = 5;
        Integer number2 = 5;
        String word1 = "Hello";
        String word2 = "World";

        System.out.println("Are numbers equal? " + areEqual(number1, number2));
        System.out.println("Are words equal? " + areEqual(word1, word2));
    }
}
