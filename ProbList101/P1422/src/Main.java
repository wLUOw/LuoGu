import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        double price;
        if (x <= 150) price = x * 0.4463;
        else if (x <= 400) price = 150 * 0.4463 + (x - 150) * 0.4663;
        else price = 150 * 0.4463 + 250 * 0.4663 + (x - 400) * 0.5663;
        System.out.println(String.format("%.1f", price));
    }
}
