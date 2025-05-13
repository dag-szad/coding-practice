#include <stdio.h>
#include <cs50.h>

int main(void) {

    // Input użytkownika i określenie tablicy znaków
    long credit_number = get_long("Number: ");

    int digits[16];

    // Pętla do rozdzielenia cyfr i sprawdzenia długości numeru
    int i = 0;

    while (credit_number > 0) {
        digits[i] = credit_number % 10;
        credit_number /= 10;
        i++;
    }

    if (i < 13 || i > 16) {
        printf("INVALID\n");
        return 0;
    }

    // Sprawdzenie poprawności karty
    int sumEven = 0;
    int sumOdd = 0;

    for (int j = 0; j < i; j++) {
        if (j % 2 != 0) {
            int doubled = digits[j] * 2;
            sumEven += (doubled < 10) ? doubled : (doubled / 10) + (doubled % 10);
        } else {
            sumOdd += digits[j];
        }
    }

    int sum = sumOdd + sumEven;
    int isValid = sum % 10 == 0;

    if (!isValid) {
        printf("INVALID\n");
        return 0;
    }

    // Określenie marki karty
    int lastDigit = digits[i - 1];
    int secondLastDigit = digits[i - 2];

    switch (i) {
        case 13:
            if (lastDigit == 4) {
                printf("VISA\n");
            } else {
                printf("INVALID\n");
            }
            break;

        case 15:
            if (lastDigit == 3 && (secondLastDigit == 7 || secondLastDigit == 4)) {
                printf("AMEX\n");
            } else {
                printf("INVALID\n");
            }
            break;

        case 16:
            if (lastDigit == 4) {
                printf("VISA\n");
            } else if (lastDigit == 5 && (secondLastDigit >= 1 && secondLastDigit < 6)) {
                printf("MASTERCARD\n");
            } else {
                printf("INVALID\n");
            }
            break;

        default:
            printf("INVALID\n");
            break;
    }
    return 0;
}
