import java.util.Scanner;

public class Main {
    private static int cnt = 0;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        boolean[] b = new boolean[n];
        for (int i = 0; i < b.length; i++) {
            b[i] = true;
        }
        boolean[] c = new boolean[2*n];
        for (int i = 0; i < c.length; i++) {
            c[i] = true;
        }
        boolean[] d = new boolean[2*n];
        for (int i = 0; i < d.length; i++) {
            d[i] = true;
        }
        dfs(0, n, a, b, c, d);
        System.out.println(cnt);
    }

    private static void dfs(int i, int n, int[] a, boolean[] b, boolean[] c, boolean[] d){
        for (int j = 0; j < n; j++) {

            int[] a1 = a.clone();
            boolean[] b1 = b.clone();
            boolean[] c1 = c.clone();
            boolean[] d1 = d.clone();

            if (b1[j] && c1[i - j + n] && d1[i + j]){
                a1[i] = j;
                b1[j] = false;
                c1[i - j + n] = false;
                d1[i + j] = false;

                if (i < n - 1){
                    dfs(i + 1, n, a1, b1, c1, d1);
                } else {
                    a1[i] = j;
                    print(a1, n);
                    cnt++;
                }
            }
        }
    }

    private static void print(int[] a, int n){
        if (cnt <= 2){
            for (int i = 0; i < n; i++) {
                System.out.print((a[i] + 1) + " ");
            }
            System.out.println();
        }
    }
}
