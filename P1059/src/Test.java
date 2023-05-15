import java.util.HashMap;
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<Integer, String> map = new HashMap<>();
        map.put(1,"111");
        map.put(1,"222");
        System.out.println(map.size());
        System.out.println(map.get(1));
    }
}
