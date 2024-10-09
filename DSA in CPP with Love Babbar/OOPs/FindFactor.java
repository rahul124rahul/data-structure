import java.util.Scanner;

public class FindFactor {
    
    public static void main(String[] args) {
        // Create a Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);
        
        // Prompt the user to enter a number
        System.out.println("Enter a number:");
        int number = scanner.nextInt();
        
        // Call the method to find and print the factors
        printFactors(number);
    }

    // Method to print the factors of the given number
    public static void printFactors(int number) {
        // Handle the special case when the input is zero
        if (number == 0) {
            System.out.println("No Factors");
            return;
        }
        
        // If the input is negative, make it positive
        if (number < 0) {
            number = Math.abs(number);
        }
        
        // Find and print the factors of the number
        System.out.print("Factors: ");
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {  // If i divides the number exactly, it's a factor
                System.out.print(i);
                
                // Print a comma after every factor except the last one
                if (i != number) {
                    System.out.print(", ");
                }
            }
        }
    }
}
