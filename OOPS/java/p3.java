import java.util.Scanner;

public class Main {

    int add(int x, int y) {
        return x + y;
    }

    int sub(int x, int y) {
        return x - y;
    }

    int mul(int x, int y) {
        return x * y;
    }

    int div(int x, int y) {
        return x / y;
    }

    public void main(String[] args) {

        Scanner oprt = new Scanner(System.in);

        System.out.println("Enter the operation you want to perform:");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");

        int a = oprt.nextInt();

        System.out.print("Enter num1: ");
        int x = oprt.nextInt();

        System.out.print("Enter num2: ");
        int y = oprt.nextInt();

        switch (a) {
            case 1:
                System.out.println("Addition: " + add(x, y));
                break;

            case 2:
                System.out.println("Subtraction: " + sub(x, y));
                break;

            case 3:
                System.out.println("Multiplication: " + mul(x, y));
                break;

            case 4:
                if (y != 0) {
                    System.out.println("Division: " + div(x, y));
                } else {
                    System.out.println("Error: Division by zero is not allowed.");
                }
                break;

            default:
                System.out.println("Wrong input! Please enter a number between 1 and 4.");
        }

        oprt.close();
    }
}
