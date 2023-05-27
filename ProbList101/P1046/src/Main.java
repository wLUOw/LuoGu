import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        int h = sc.nextInt();
        int cnt = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] - h <= 30) cnt++;
        }
        System.out.println(cnt);
    }
}
