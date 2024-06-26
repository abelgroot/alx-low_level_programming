#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int row, col, product;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;

            // Print product with comma and spaces
            if (col == 0)
            {
                _putchar('0' + product);    // Print first product without preceding comma
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                // Print extra space for single-digit numbers
                if (product < 10)
                    _putchar(' ');

                // Print tens digit if product is greater than 9
                if (product >= 10)
                    _putchar('0' + (product / 10));
                
                // Print units digit
                _putchar('0' + (product % 10));
            }
        }
        _putchar('\n');    // Move to the next line after each row
    }
}

