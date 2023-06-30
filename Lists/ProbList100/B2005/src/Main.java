import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);
        System.out.println("  " + c + "  ");
        System.out.println(" " + c + c + c + " ");
        System.out.println("" + c + c + c + c + c);
    }
}
