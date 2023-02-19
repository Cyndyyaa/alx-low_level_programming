#include <stdlib.h>
#include <time.h>
#include <stdio.h> /**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main (void)
{
        char az;
        for (az = 'a'; az < 'z'; az++;)
        {
                putchar(az);
        }
        putchar("\n");
        return (0);
}
