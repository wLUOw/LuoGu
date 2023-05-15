import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int left = sc.nextInt();
        int right = sc.nextInt();
        int cnt = 0;

        for (int i = left; i <= right; i++) {
            String str = i + "";
            for (int j = 0; j < str.length(); j++) {
                if (str.charAt(j) == '2'){
                    cnt++;
                }
            }
        }

        System.out.println(cnt);
    }
}
