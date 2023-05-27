import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int[] arr = new int[]{a, b, c};
        Arrays.sort(arr);
        a = arr[0];
        b = arr[1];
        c = arr[2];
        if (a + b <= c) {
            System.out.println("Not triangle");
            return;
        }
        System.out.println(a*a + b*b == c*c ? "Right triangle" : (a*a + b*b < c*c ? "Obtuse triangle" : "Acute triangle"));
        if (a == b || b == c) System.out.println("Isosceles triangle");
        if (a == b && b == c) System.out.println("Equilateral triangle");
    }
}
