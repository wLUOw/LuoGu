import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean a = n % 2 == 0;
        boolean b = n > 4 && n <= 12;
        System.out.println((a && b ? 1 : 0) + " " + (a || b ? 1 : 0) + " " + (a ^ b ? 1 : 0) + " " + (!a && !b ? 1 : 0));
    }
}
