#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
    height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
        {
            for (int space = height - row; space > 0; space--)
                {
                    printf(" ");
                }
            for  (int hash = 0; hash < row+1; hash++)
                {
                    printf("#");
                }
        printf(" ");
            for (int hash2 = 0; hash2 < row+1; hash2++)
                {
                    printf("#");
                }
            printf("\n");
        }
}
