import java.util.Scanner;
import java.util.Random;

public class NumberGuessingGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        int min = 1;
        int max = 10;
        int guess;
        int attempts = 0;
        int randomNumber = random.nextInt(min, max + 1);
        
        System.out.println("Number Guessing Game");
        System.out.printf("Guess a number between %d-%d.", min, max);

        do {
            System.out.println("Enter a guess: ");
            guess = scanner.nextInt();
            attempts++; 

            if (guess < randomNumber) {
                System.out.println("Too low!");
            } else if (guess > randomNumber) {
                System.out.println("Too high");
            } else {
                System.out.println("You have won! The number was: " + randomNumber);
                System.out.println("Number of attempts: " + attempts);
            }
        } while(guess != randomNumber); 
        
        scanner.close();
    }
}
