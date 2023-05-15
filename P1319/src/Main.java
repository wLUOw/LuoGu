import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String str = "";
        int sum = 0;
        boolean isZero = true;
        while (sum < N * N){
            if (isZero){
                int temp = sc.nextInt();
                sum += temp;
                for (int i = 0; i < temp; i++) {
                    str += "0";
                }
            } else {
                int temp = sc.nextInt();
                sum += temp;
                for (int i = 0; i < temp; i++) {
                    str += "1";
                }
            }
            isZero = !isZero;
        }

        for (int i = 0; i < N; i++) {
            System.out.println(str.substring(i*N, i*N + N));
        }
    }
}
