import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int v = sc.nextInt();
        int time = s / v + 10;
        time += s % v == 0 ? 0 : 1;
        int h = time / 60;
        int m = time % 60;
        h = 7 - h;
        if (h < 0) h += 24;
        m = 60 - m;
        System.out.println((h < 10 ? "0" + h : h) + ":" + (m < 10 ? "0" + m : m));
    }
}
