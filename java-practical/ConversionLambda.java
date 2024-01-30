import java.util.Scanner;

interface Converter {
    double convert(double input);
}

public class ConversionLambda {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Converter fahrenheitToCelsius = (fahrenheit) -> (fahrenheit - 32.0) * 5.0 / 9.0;
        Converter kilometersToMiles = (kilometers) -> kilometers * 0.621371;
        System.out.print("Enter temperature in Fahrenheit: ");
        double fahrenheit = scanner.nextDouble();
        double celsius = fahrenheitToCelsius.convert(fahrenheit);
        System.out.println(fahrenheit + " Fahrenheit is equal to " + celsius + " Celsius");

        System.out.print("\nEnter distance in Kilometers: ");
        double kilometers = scanner.nextDouble();
        double miles = kilometersToMiles.convert(kilometers);
        System.out.println(kilometers + " Kilometers is equal to " + miles + " Miles");

        scanner.close();
    }
}
