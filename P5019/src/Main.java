import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n + 2];
        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int le = i - 1;
            int ri = i + 1;
            while (arr[le] >= arr[i]){
                le--;
            }
            while (arr[ri] > arr[i]){
                ri++;
            }
            cnt += arr[i] - Math.max(arr[le], arr[ri]);
        }

        System.out.println(cnt);
    }
}
