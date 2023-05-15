import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("4=2+2");
        for (int i = 6; i <= n; i+=2) {
            for (int j = 3; j <= n / 2; j+=2) {
                if (isZhiShu(j) && isZhiShu(i - j)){
                    System.out.println(i + "=" + j + "+" + (i - j));
                    break;
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
