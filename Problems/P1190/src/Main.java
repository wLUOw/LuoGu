import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] temps = new int[n];
        for (int i = 0; i < n; i++) {
            temps[i] = sc.nextInt();
        }

        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            list.add(temps[i]);
        }

        int[] arr = new int[m];
        for (int i = 0; i < m; i++) {
            arr[i] = list.remove(0);
        }

        int time = 0;
        for (int i = 0; i < n - m; i++) {
            int index = 0;
            int min = arr[0];
            for (int j = 1; j < m; j++) {
                if (arr[j] < min){
                    min = arr[j];
                    index = j;
                }
            }

            for (int j = 0; j < m; j++) {
                arr[j] -= min;
            }
            time += min;
            arr[index] = list.remove(0);
        }

        int max = arr[0];
        for (int i = 1; i < m; i++) {
            if (arr[i] > max){
                max = arr[i];
            }
        }
        time += max;

        System.out.println(time);
    }
}
