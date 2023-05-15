import javax.sound.midi.Soundbank;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        ArrayList<String> list = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            list.add(i + "");
        }

        for (int i = 0; i < n - 1; i++) {
            int dif = Math.abs(arr[i] - arr[i + 1]);
            list.remove(dif + "");
        }

        if (list.size() == 0){
            System.out.println("Jolly");
        } else {
            System.out.println("Not jolly");
        }

    }
}
