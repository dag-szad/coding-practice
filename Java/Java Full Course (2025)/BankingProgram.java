import java.util.Scanner;

public class BankingProgram {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {

        double balance = 0;
        boolean isRunning = true;
        int choice;

        while(isRunning) {
            System.out.println("---------------");
            System.out.println("Banking Program");
            System.out.println("---------------");
            System.out.println("1. Show balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Exit");
            System.out.println("---------------");
            
            System.out.print("Enter your choice (1-4): ");
            choice = scanner.nextInt();
            System.out.println("---------------");
    
            switch(choice) {
              case 1 -> showBalance(balance);
              case 2 -> balance += deposit();
              case 3 -> balance -= withdraw(balance);
              case 4 -> {
                  System.out.println("Thank you, have a nice day!");
                  isRunning = false;
                }
              default -> System.out.println("Invalid choice!");
            }
        }

        scanner.close();
    }

    static void showBalance(double balance) {
        System.out.printf("Balance: $%.2f\n", balance);
    }

    static double deposit() {
        System.out.print("Enter amount to deposit: ");
        double amount = scanner.nextDouble();

        if(amount < 0){
            System.out.println("Amount can't be negative");
            return 0;
        } else {
            return amount;
        }
    }

    static double withdraw(double balance) {
        System.out.print("Enter amount to withdraw: ");
        double amount = scanner.nextDouble();

        if(amount > balance) {
            System.out.println("Insufficient funds.");
            return 0;
        } else if (amount < 0) {
            System.out.println("Amount can't be negative");
            return 0;
        } else {
            return amount;
        }
    }
}