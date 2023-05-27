import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 0;
        int maxT = -1;
        for (int i = 1; i <= 7; i++) {
            int t = sc.nextInt() + sc.nextInt();
            if (t > 8 && t > maxT) {
                maxT = t;
                x = i;
            }
        }
        System.out.println(x);
    }
}
