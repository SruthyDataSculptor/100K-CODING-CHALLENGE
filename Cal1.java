package Java;
import java.util.Scanner;;
public class Cal1 {
    public static void main(String ar[]){
        Scanner sc = new Scanner(System.in);
        Cal2 c1 = new Cal2();
        while (true){
            System.out.println("\nMenu: ");
            System.out.println("1.Addition");
            System.out.println("2.Subtraction");
            System.out.println("3.Multiplication");
            System.out.println("4.Division");
            System.out.println("5.Exit");
            System.out.println("Choose an operation: ");
            int choice = sc.nextInt();

            if (choice == 5){
                System.out.println("Exiting program.");
                break;
            }
            System.out.println("Enter the first number: ");
            double num1 = sc.nextDouble();
            System.out.println("Enter the second number: ");
            double num2 = sc.nextDouble();

            switch(choice){
                case 1:
                    c1.addition(num1, num2);
                    break;

                case 2:
                    c1.subtraction(num1,num2);
                    break;

                case 3:
                    c1.multiplication(num1, num2);
                    break;

                case 4:
                    c1.division(num1, num2);
                    break;
                
                default:
                    System.out.println("Invalid choice! Please select a valid operation.");
                    break;
            }

        }

        sc.close();


    }
    
}
