import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();
        int num1 = 1;
        int num2 = 1;
        for (int i = 0; i < str1.length(); i++) {
            num1 *= (str1.charAt(i) - 64);
        }
        for (int i = 0; i < str2.length(); i++) {
            num2 *= (str2.charAt(i) - 64);
        }

        System.out.println(num1 % 47 == num2 % 47 ? "GO" : "STAY");
    }
}
