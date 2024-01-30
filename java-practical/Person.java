public class Person {
    private String name;
    private int age;
    private String email;

    public Person() {
        // Default constructor
    }

    public Person(String name, int age, String email) {
        this.name = name;
        this.age = age;
        this.email = email;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' + ", age=" + age +
                ", email='" + email + '\'' + '}';
    }

    public static void main(String[] args) {
        Person person1 = new Person("John Doe", 25, "john.doe@example.com");
        Person person2 = new Person();

        person2.setName("Jane Doe");
        person2.setAge(30);
        person2.setEmail("jane.doe@example.com");

        System.out.println(person1);
        System.out.println(person2);
    }
}
