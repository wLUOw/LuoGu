import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Today, I ate " + n + " apple" + (n > 1 ? "s" : "") + ".");
    }
}
