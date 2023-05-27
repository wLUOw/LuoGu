import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int y = sc.nextInt();
        int m = sc.nextInt();
        if (m <= 7 && m % 2 == 1 || m >= 8 && m % 2 == 0) System.out.println(31);
        else if (m != 2) System.out.println(30);
        else System.out.println(y % 4 == 0 && y % 100 != 0 || y % 400 == 0 ? 29 : 28);
    }
}
