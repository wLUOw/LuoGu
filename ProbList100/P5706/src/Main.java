import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double t = sc.nextDouble();
        int n = sc.nextInt();
        System.out.println(String.format("%.3f", t / n) + "\n" + 2 * n);
    }
}
