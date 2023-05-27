import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int t = sc.nextInt();
        int s = sc.nextInt();
        if (t == 0) {
            System.out.println(0);
            return;
        }
        int x = s / t;
        if (s % t == 0) System.out.println(m - x < 0 ? 0 : m - x);
        else System.out.println(m - x - 1 < 0 ? 0 : m - x - 1);
    }
}
