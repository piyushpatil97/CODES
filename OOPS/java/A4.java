import java.util.*;

class Shape {

    static double area(int l) {
        return l * l;
    }

    static double area(int l, int b) {
        return l * b;
    }

    static double area(int a, int b, int c) {
        double s = (a + b + c) / 2.0;

        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("***** CALCULATE *****");
        System.out.println("1. Square");
        System.out.println("2. Rectangle");
        System.out.println("3. Triangle");
        System.out.println("4. Exit");

        System.out.print("Enter what you want to calculate: ");
        int opt = sc.nextInt();

        switch (opt) {

            case 1:
                System.out.print("Enter length: ");
                int l = sc.nextInt();

                System.out.println("Area of Square = " + area(l));
                break;

            case 2:
                System.out.print("Enter length: ");
                int L = sc.nextInt();

                System.out.print("Enter breadth: ");
                int b = sc.nextInt();

                System.out.println("Area of Rectangle = " + area(L, b));
                break;

            case 3:
                System.out.print("Enter a: ");
                int a = sc.nextInt();

                System.out.print("Enter b: ");
                int q = sc.nextInt();

                System.out.print("Enter c: ");
                int r = sc.nextInt();

                System.out.println("Area of Triangle = " + area(a, q, r));
                break;

            case 4:
                System.out.println("Exiting...");
                break;

            default:
                System.out.println("Enter correct option.");
        }

        sc.close();
    }
}
