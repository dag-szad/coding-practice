import java.util.Random;
import java.util.Scanner;

public class DiceRollingProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        System.out.println("Enter the number of dice to roll: ");
        int numOfDice = scanner.nextInt();

        int total = 0;

        if(numOfDice > 0) {
            for (int i = 0; i < numOfDice; i++) {
                int roll = random.nextInt(1,7);
                printDie(roll);
                total += roll;
            }
            System.out.println("Total: " + total);
        } else {
            System.out.println("Number of dice must be greater than 0.");
        }

        scanner.close();
    }

    static void printDie(int roll) {
        switch (roll) {
            case 1 -> System.out.println("⚀");
            case 2-> System.out.println("⚁");
            case 3 -> System.out.println("⚂");
            case 4 -> System.out.println("⚃");
            case 5 -> System.out.println("⚄");
            case 6 -> System.out.println("⚅");
            default -> System.out.println("Error");
        }
    }
}