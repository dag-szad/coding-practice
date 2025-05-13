#include <stdio.h>
#include <cs50.h>

int main(void) {
    int cents;

    do {
        cents = get_int("Change owed: ");
    } while (cents < 0);

    int quarters = cents / 25;
    cents = cents - quarters * 25;

    int dimes = cents / 10;
    cents = cents - dimes * 10;

    int nickels = cents / 5;
    cents = cents - nickels * 5;

    int pennies = cents / 1;
    cents = cents - pennies;

    int result = quarters + dimes + nickels + pennies;
    printf("%d \n", result);
}
