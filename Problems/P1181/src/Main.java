import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<>();
        int cnt = 1;
        for (int i = 0; i < N; i++) {
            list.add(sc.nextInt());
            if (addAll(list) > M){
                cnt++;
                int temp = list.get(list.size() - 1);
                list.clear();
                list.add(temp);
            }
        }
        System.out.println(cnt);
    }

    private static int addAll(ArrayList<Integer> list){
        int sum = 0;
        for (int i = 0; i < list.size(); i++) {
            sum += list.get(i);
        }
        return sum;
    }
}
