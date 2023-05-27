import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int price = Integer.MAX_VALUE;
        for (int i = 0; i < 3; i++) {
            int p;
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (n % x == 0) p = y * (n / x);
            else p = y * (n / x + 1);
            if (p < price) price = p;
        }
        System.out.println(price);
    }
}
