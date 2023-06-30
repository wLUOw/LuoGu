import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        ArrayList<String> ans = new ArrayList<>();
        int sub1 = 0;

        for (int i = 100; i <= 300; i++) {
            if (i % k == 0){
                sub1 = i;
                break;
            }
        }
        if (sub1 == 0){
            System.out.println("No");
            return;
        }

        while (sub1 <= 300){
            if (sub1 == 300){
                ans.add("30000");
                break;
            }
            for (int i = 0; i < 10; i++) {
                if ((sub1 % 100 * 10 + i) % k != 0){
                    continue;
                }
                for (int j = 0; j < 10; j++) {
                    if (((sub1 % 100 * 10 + i) % 100 * 10 + j) % k == 0){
                        ans.add("" + sub1 + "" + i + "" + j);
                    }
                }
            }
            sub1 += k;
        }

        if (ans.isEmpty()){
            System.out.println("No");
            return;
        }
        for (int i = 0; i < ans.size(); i++) {
            System.out.println(ans.get(i));
        }
    }
}
