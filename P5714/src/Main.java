import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double weight = sc.nextDouble();
        double height = sc.nextDouble();
        double bmi = weight / (height * height);

        if (bmi < 18.5){
            System.out.println("Underweight");
        } else if (bmi < 24){
            System.out.println("Normal");
        } else {
            if (bmi < 100){
                System.out.printf("%.4f\n", bmi);
            } else {
                System.out.printf("%.3f\n", bmi);
            }
            System.out.println("Overweight");
        }
    }
}
