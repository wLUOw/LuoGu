import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int cnt = 0;
        for (int i = 0; i < y; i++) {
            cnt += (x + i) % 7 <= 5 && (x + i) % 7 >= 1 ? 1 : 0;
        }
        System.out.println(250 * cnt);
    }
}
