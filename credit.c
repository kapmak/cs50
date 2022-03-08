#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardnum;
    int sum1 = 0;
    int sum2 = 0;
    int last1;
    int last2;
    int total = 0;
    int count = 0;
{
    //ask for card number
    cardnum = get_long("What is the credit card number: ");
}
{
    //count digits
    long card = cardnum;
    while(card > 0)
    {
        card = card / 10;
        count++;
    }
    if (count != 13 && count != 15 && count != 16)
    {
        printf("INVALID\n");
        return 0;
    }
}
    //checksum
    long check = cardnum;
    int dub1 = 0;
    int dub2 = 0;
    do
    {

        //add last digit to sum1 and remove last digit
        last1 = check % 10;
        sum1 = sum1 + last1;
        check = check / 10;

        //get next last digit and remove
        last2 = check % 10;
        check = check / 10;

        //double last digit and add to sum 2
        last2 = last2 * 2;
        dub1 = last2 % 10;
        dub2 = last2 / 10;
        sum2 = sum2 + dub1 + dub2;

    }
        while (check > 0);

    {
        total = sum1 + sum2;
    }
{
    //validate checksum
    if (total % 10 != 0)
        {
            printf("INVALID\n");
            return 0;
        }
    }

{
    //get card type number
    long typenum = cardnum;
    do
    {
        typenum = typenum / 10;
    }
    while (typenum > 100);

    if (typenum / 10 == 5 && (typenum % 10 > 0 && typenum % 10 < 6))
        {
            printf("MASTERCARD\n");
        }
    else if (typenum / 10 == 3 && (typenum % 10 == 4 || typenum % 10 == 7 ))
        {
            printf("AMEX\n");
        }
    else if (typenum / 10 == 4)
        {
            printf("VISA\n");
        }
    else
        {
            printf("INVALID\n");
            return 0;
        }
}

}
