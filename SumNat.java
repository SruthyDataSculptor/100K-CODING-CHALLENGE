package Java;
import java.util.Scanner;

public class SumNat {
    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the limit: ");
        int limit = sc.nextInt();
        int sum = 0;
        for(int i=0;i<limit;i++)
        {
            sum = sum +i;
        }
        System.out.println("Result is: "+sum);

    }
    
}
