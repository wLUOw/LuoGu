import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        int cnt = 1;
        int max = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] == 1){
                cnt++;
            } else {
                max = Math.max(max, cnt);
                cnt = 1;
            }
        }

        System.out.println(Math.max(max, cnt));
    }
}
