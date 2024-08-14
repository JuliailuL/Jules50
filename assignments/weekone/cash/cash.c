#include <cs50.h>
#include <stdio.h>

int get_amount(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_amount();
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);
    int nickles = calculate_nickles(cents);
    cents = cents - (nickles * 5);
    int pennies = calculate_pennies(cents);
    int coins = quarters + dimes + nickles + pennies;
    printf("%i\n", coins);
}

int get_amount(void)
{
    int cents;
    do
    {
        cents = get_int("Cash owed: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickles(int cents)
{
    int nickles = 0;
    while (cents >= 5)
    {
        nickles++;
        cents = cents - 5;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents--;
    }
    return pennies;
}
