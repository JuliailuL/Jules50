#include <cs50.h>
#include <stdio.h>

long get_number(void);
long check_number(long no);
void check_species(long c, long no);

int main(void)
{
    long no = get_number();
    long c = check_number(no);
    check_species(c, no);
}


long get_number(void)
{
    long no;
    do
    {
        no = get_long("Number: ");
    }
    while (no < 1);
    return no;
}

long check_number(long no)
{
    long a1 = no % 10;
    long b1 = no % 100 / 10 * 2;
    long b11 = (b1 % 100 / 10) + (b1 % 10);

    long a2 = no % 1000 / 100;
    long b2 = no % 10000 / 1000 * 2;
    long b21 = (b2 % 100 / 10) + (b2 % 10);

    long a3 = no % 100000 / 10000;
    long b3 = no % 1000000 / 100000 * 2;
    long b31 = (b3 % 100 / 10) + (b3 % 10);

    long a4 = no % 10000000 / 1000000;
    long b4 = no % 100000000 / 10000000 * 2;
    long b41 = (b4 % 100 / 10) + (b4 % 10);

    long a5 = no % 1000000000 / 100000000;
    long b5 = no % 10000000000 / 1000000000 * 2;
    long b51 = (b5 % 100 / 10) + (b5 % 10);

    long a6 = no % 100000000000 / 10000000000;
    long b6 = no % 1000000000000 / 100000000000 * 2;
    long b61 = (b6 % 100 / 10) + (b6 % 10);

    long a7 = no % 10000000000000 / 1000000000000;
    long b7 = no % 100000000000000 / 10000000000000 * 2;
    long b71 = (b7 % 100 / 10) + (b7 % 10);

    long a8 = no % 1000000000000000 / 100000000000000;
    long b8 = no % 10000000000000000 / 1000000000000000 * 2;
    long b81 = (b8 % 100 / 10) + (b8 % 10);

    long c = b11 + b21 + b31 + b41 + b51 + b61 + b71 + b81 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
    return c;
}

void check_species(long c, long no)
{
    int visa1 = no / 1000000000000;
    int visa2 = no / 1000000000000000;
    int amex = no / 10000000000000;
    int master = no / 100000000000000;

    if (c % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if ((visa1 == 4) || (visa2 == 4))
    {
        printf("VISA\n");
    }
    else if ((amex == 34) || (amex == 37))
    {
        printf("AMEX\n");
    }
    else if ((master == 51) || (master == 52) || (master == 53) || (master == 54) || (master == 55))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
