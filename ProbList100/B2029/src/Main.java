import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double h = sc.nextDouble();
        double r = sc.nextDouble();
        double v = 3.14 * r * r * h;
        System.out.println((int)(20000 / v) + 1);
    }
}
