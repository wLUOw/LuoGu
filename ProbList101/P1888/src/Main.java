import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[]{sc.nextInt(), sc.nextInt(), sc.nextInt()};
        Arrays.sort(arr);
        int a = arr[0];
        int c = arr[2];
        int p = gcd(a, c);
        System.out.println(a/p + "/" + c/p);
    }

    private static int gcd(int x, int y) {
        int m = Math.max(x, y);
        int n = Math.min(x, y);
        int p = m % n;
        if (p == 0) return n;
        else return gcd(n, p);
    }
}
