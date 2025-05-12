import java.util.Scanner;

public class WeightConverter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Weight Conversion Program");
        System.out.println("1: Convert lbs to kgs");
        System.out.println("2: Convert kgs to lbs");
        
        System.out.print("Choose option (1 or 2): ");
        int choice = scanner.nextInt();
        
        double weight;
        double newWeight;
        
        if (choice == 1) {
            System.out.println("Enter the weight: ");
            weight = scanner.nextDouble();
            newWeight = weight * 0.453592;
            System.out.printf("The new weight in kgs is: %.2f", newWeight);
        } else if (choice == 2) {
            System.out.println("Enter the weight: ");
            weight = scanner.nextDouble();
            newWeight = weight * 2.20462;
            System.out.printf("The new weight in lbs is: %.2f", newWeight);
        } else {
            System.out.println("That was not a valid choice");
        }

        scanner.close();
    }
}