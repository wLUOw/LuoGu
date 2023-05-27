import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] a = sc.next().toCharArray();
        char[] mod = "0123456789X".toCharArray();
        int i, j = 1, t = 0;
        for (i = 0; i < 12; i++) {
            if (a[i] == '-') continue;
            t += (a[i] - '0') * j++;
        }
        if (mod[t % 11] == a[12]) System.out.println("Right");
        else {
            a[12] = mod[t % 11];
            for (int k = 0; k < a.length; k++) {
                System.out.print(a[k]);
            }
        }
    }
}
