import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double p = (a + b + c) / 2;
        System.out.println(String.format("%.1f", Math.sqrt(p * (p - a) * (p - b) * (p - c))));
    }
}
