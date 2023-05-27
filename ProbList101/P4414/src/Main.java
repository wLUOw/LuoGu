import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[]{sc.nextInt(), sc.nextInt(), sc.nextInt()};
        Arrays.sort(arr);
        String s = sc.next();
        if (s.equals("ABC")) System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);
        else if (s.equals("ACB")) System.out.println(arr[0] + " " + arr[2] + " " + arr[1]);
        else if (s.equals("BAC")) System.out.println(arr[1] + " " + arr[0] + " " + arr[2]);
        else if (s.equals("BCA")) System.out.println(arr[1] + " " + arr[2] + " " + arr[0]);
        else if (s.equals("CAB")) System.out.println(arr[2] + " " + arr[0] + " " + arr[1]);
        else if (s.equals("CBA")) System.out.println(arr[2] + " " + arr[1] + " " + arr[0]);
    }
}

