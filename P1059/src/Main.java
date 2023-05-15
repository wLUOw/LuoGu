import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = 1001;
        }
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            boolean flag = true;
            for (int j = 0; j < cnt; j++) {
                if (x == arr[j]){
                    flag = false;
                }
            }
            if (flag){
                arr[cnt] = x;
                cnt++;
            }
        }
        Arrays.sort(arr);
        System.out.println(cnt);
        for (int i = 0; i < cnt; i++) {
            System.out.printf("%d ", arr[i]);
        }
    }
}
