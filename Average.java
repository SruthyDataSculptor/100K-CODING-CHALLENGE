package Java;
import java.util.Scanner;
public class Average {
    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 3 numbers to find average: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();
        
        int Ave = (num1 + num2 + num3)/3;
        System.out.println("Average is : "+ Ave);

    }
    
}
