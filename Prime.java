package Java;
import java.util.Scanner;
public class Prime {
    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = sc.nextInt();
        int flag = 0;

        for(int i = 2;i<num;i++){
            if(num%i==0){
                flag = 1;
                break;
            }
        }
        if(flag>0){
            System.out.println(num + "  is not a prime number.");
        }else{
            System.out.println(num + "  is a prime number.");
        }
    }
}
    