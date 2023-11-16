#include <stdio.h>
#include <limits.h>

long long calculate_factorial(long long n) {
    long long result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    long long number;
    char data_type;

    printf("Enter one decimal number: ");
    scanf("%lld", &number);

    printf("Enter data type to use (char, int, long long): ");
    scanf(" %c", &data_type);

    if (data_type == 'c' && (number < 0 || number > 127)) {
        printf("Value of factorial is not valid for data type char.\n");
        return 0;
    }

    if (data_type == 'i' && (number < 0 || number > INT_MAX)) {
        printf("Value of factorial is not valid for data type int.\n");
        return 0;
    }

    if (data_type == 'l' && (number < 0 || number > LLONG_MAX)) {
        printf("Value of factorial is not valid for data type long long.\n");
        return 0;
    }

    long long result = calculate_factorial(number);

    if (data_type == 'c' && (result < CHAR_MIN || result > CHAR_MAX)) {
        printf("Value of factorial cannot be converted to data type char.\n");
        return 0;
    }

    if (data_type == 'i' && (result < INT_MIN || result > INT_MAX)) {
        printf("Value of factorial cannot be converted to data type int.\n");
        return 0;
    }

    if (data_type == 'l' && (result < LLONG_MIN || result > LLONG_MAX)) {
        printf("Value of factorial cannot be converted to data type long long.\n");
        return 0;
    }

    printf("The factorial of %lld is: %lld\n", number, result);

    return 0;
}