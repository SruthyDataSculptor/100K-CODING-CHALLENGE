package Java;
import java.util.Scanner;
public class Sum1 {
    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        int number1 = sc.nextInt();
        int number2 = sc.nextInt();
        int number3 = sc.nextInt();
        int number4 = sc.nextInt();

        Sum2 s = new Sum2();
        Sum2 s1 = new Sum2();
        s.CalculateSum(number1,number2);
        s.Display();

        s1.CalculateSum(number3, number4);
        s1.Display();
    }
    
}
