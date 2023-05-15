import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n % 2 == 0){
            System.out.println(n / 2);
        } else {
            for (int i = 3; i < Math.sqrt(n); i+=2) {
                if (isZhiShu(i) && n % i == 0){
                    System.out.println(n / i);
                }
            }
        }
    }

    private static boolean isZhiShu(int x){
        if (x == 2){
            return true;
        } else if (x % 2 == 1){
            boolean flg = true;
            for (int i = 3; i <= Math.sqrt(x); i += 2) {
                if (x % i == 0){
                    flg = false;
                }
            }
            return flg;
        } else {
            return false;
        }

    }
}
