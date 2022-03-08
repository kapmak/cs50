#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //variable for height
    int n; 
    do
    {
        n = get_int("Height: ");
    }
    //validate height as 1 to 8
    while (n < 1 || n > 8); 

    //print a row
    for (int i = 0; i < n; i++)
    {

        //print spaces in row
        for (int k = n - i; k > 0; k--) 

            {
                printf(" ");
            }

        //print hashes per varible n
        for (int j = 0; j < i-1; j++)

            {
                printf("#");
            }

        printf("\n");
    }
}
