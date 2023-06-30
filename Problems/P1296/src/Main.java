import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);

        for (int i = 0; i < n; i++) {
            int j = i + 1;
            while (j < n && arr[j] - arr[i] <= d){
                cnt++;
                j++;
            }
        }

        System.out.println(cnt);
    }
}
