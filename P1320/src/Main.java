import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int N = str.length();
        for (int i = 0; i < N - 1; i++) {
            str += sc.next();
        }
        System.out.printf("%d ", N);

        int sum = 0;
        while (sum < N * N){
            int cnt = 1;
            char c = str.charAt(sum);
            if (sum == 0 && c == '1'){
                System.out.print("0 ");
            }
            while (sum + cnt < N * N && str.charAt(sum + cnt) == c){
                cnt++;
            }
            sum += cnt;
            System.out.printf("%d ", cnt);
        }
    }
}
