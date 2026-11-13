#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Question 1: Write a C program that accepts temperature value in Fahrenheit
    from the user in the terminal and prints out the converted value in Celsius.*/
    float tempFahrenheit;
    float tempCelsius;

    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    tempCelsius = (tempFahrenheit - 32.0) * (5.0/9.0);

    printf("\nThe Temperature in Celsius is: %.2f\n", tempCelsius);

    /*Question 2: Write a C program that accept transactions from the user via the terminal,
    each transaction can either be a debit or credit. For each transaction, you will accept
    two values from the user, the transaction type and the amount in Naira, then you will
    print out the type of transaction received and the amount back to the terminal, amount
    printed to the terminal will be in Dollars (1370)*/
    float amountNaira;
    char transactionType[6];
    float amountDollar;

    printf("\n\nWELCOME!!!!\n");
    printf("What type of Transaction do you want to input? (Credit or Debit): ");

    scanf("%s", transactionType);

    printf("Enter Amount in Naira: ");
    scanf("%f", &amountNaira);

    amountDollar = amountNaira / 1370.00;

    printf("\nThis is what You entered \n");
    printf("Transaction Type: %s\n", transactionType);
    printf("Amount in Dollars: $%.2f", amountDollar);
    return 0;
}
