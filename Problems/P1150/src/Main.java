import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int cnt = n;

        while (n >= k){
            cnt += n / k;
            n = n / k + n % k;
        }

        System.out.println(cnt);
    }
}
